#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Importar funciones de string.

int main()
{
    //Declaramos un string inicializado a 'Hola'.
    char string_1[5] = "Hola";
    // Declaramos otro string de 4 caracteres reservando memoria.
    char *string_2 = malloc(sizeof(char) * 4);
    //Se puede utilizar como un string normal.
    string_2 = "Hola";
    //Imprimmos 'string_2'.
    printf("%s\n", string_2);
    //Imprimmos 'string'.
    printf("%s\n", string_1);
    /* En c no se pueden concatenar strings sumandolos.
     * Tampoco comparar con los operadores lógicos o conocer su longitud de forma nativa.
     * Se usarán funciones de la bilioteca <string.h> para todo ello.
    */
    //Obtenermos la longitud de 'string_1'.
    int length = strlen(string_1);
    printf("%d\n", length);
    //Comparemos 'string_1' y 'string_2'-
    int cmp = strcmp(string_1, string_2);
    // 'strcmp' devolverá 0 si son iguales, un número menor de 0 si 'string_1' es menor que 'string_2', y mayor de 0 en el caso inverso.
    //Lo podemos usar en una condición.
    if (strcmp("a", "a") == 0)
    {
        printf("True\n");
    }
    //Concatenemos '!' a 'string_1'.
    strcat(string_1, "!");
    printf("%s\n", string_1);
    //¡OJO! si concatenasemos ahora algo más a 'string_1', incurriamos en un error ya que excederíamos la capcidad de 'string_1'.
    //Descomenta la siguiente línea para probarlo,
    //  strcat(string_1, "¡Voy a causar un error!");

    //Por último, podemos copiar un string en otro usando strcpy.
    strcpy(string_1, "Copy");
    printf("%s\n", string_1);
}