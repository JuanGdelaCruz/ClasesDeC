#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Declaramos un string inicializado a 'Hola'.
  char string[4] = "Hola";
  // Declaramos otro string de 4 caracteres reservando memoria.
  char *string_2 = malloc(sizeof(char) * 4);
  //Se puede utilizar como un string normal.
  string_2 = "Hola";
  //Imprimmos 'string_2'.
  printf("%s\n", string_2);
  //Imprimmos 'string'.
  printf("%s\n", string);
  
}