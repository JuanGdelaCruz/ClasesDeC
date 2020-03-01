#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Declaramos un array de 6 enteros.
  int array[6] = {1, 2, 3, 4, 5, 6};
  /* Declaramos otro array de 6 enteros no inicializado. 
   * Esto lo hacemos reservando una sección de memoria del tamaño de 6 'int's
   */
  int *array_2 = malloc(sizeof(int) * 6);
  //Rellenamos 'array_2' elemento a elemento.
  int cont;
  for (cont = 0; cont < 6; cont++)
  {
    array_2[cont] = cont;
  }
  //Podemos acceder de esta manera a un valor de 'array_2'.
  *(array_2 + 2) = 200;
  printf("%d\n", *(array_2 + 2));
  //Tambien se puede acceder como a un array normal.
  printf("%d\n", array_2[2]);
 
}