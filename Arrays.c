#include <stdio.h>
#include <stdlib.h>

    int main()
    {
      int array[6]  = {1,2,3,4,5,6};
      int *array2 = malloc(sizeof(int)*6);
      int cont ;
      for(cont=0;cont<6;cont++)
        {
            array2[cont]=cont;
        }
     char string2[4]= {'H','o','l','a'};
     char * string3 = malloc( sizeof(char)*4);
    string3 = "Hola";
    printf("%s\n",string3);
    printf("%s\n",string2);
    
    *(array2 + 1 )= 200;
    printf("%d\n",*(array2+2));

    }