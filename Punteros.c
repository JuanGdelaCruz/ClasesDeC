#include <stdio.h>
#define PI 3.14

int main(int argc, char *argv[], char **envp)
{
  //Declaramos un puntero.
  int *puntero;
  //Declaramos una variable tipo entero con valor 2.
  int my_int = 2;
  //Apuntamos el puntero a la variable 'my_int'.
  puntero = &my_int;
  //Cambiamos el valor de my_int a 4 a través del puntero.
  *puntero = 4;
  // Imprimimos por consola el valor de 'my_int' a traves del puntero.
  printf("%d\n", *puntero);
  //Imprimimos por consola el valor de puntero, es decir la dirección de memoria de 'my_int'.
  printf("%p\n", puntero);
  // Declaramos un puntero que apunta a otro puntero
  int **puntero_doble = &puntero;
  // Sacamos por consola el valor de 'my_int'.
  printf("%d\n", **puntero_doble);

  //Podemos usar la variable que hemos definido arriba.
  float my_float = 2 * PI;
  printf("%f\n", my_float);

  return 0;
}
