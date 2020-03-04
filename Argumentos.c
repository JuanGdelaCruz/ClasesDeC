#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void mi_funcion();

int main(int argc, char *argv[])
{

  for (int i = 0; i < argc; i++)
  {
    fprintf(stdout, "argv[%d]=%s\n", i, argv[i]);
  }
  int entero = 0;
  switch (entero)
  {
  case 0:
  {
    int var;
    break;
  }
  case 1:;
    int var;
    break;
  }
}

void mi_funcion()
{
  return;
}
