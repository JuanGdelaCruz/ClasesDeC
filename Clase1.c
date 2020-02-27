 #include <stdio.h>
 #define PI 3.14
      
    int main(int argc,char *argv[], char **envp)
    {
      int *puntero;
      int myint = 2;
      puntero = &myint;
      *puntero=4;
      printf("%d\n", *puntero);
      printf("%p\n", puntero);
      int **punteroDoble = &puntero;
      return 0;

    }

