#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  //Aquí simplemento pongo el bufer de entrada y salida a 0 para que siempre saque todo por pantalla.
  //No hace falta mirarlo.
  setbuf(stdout, NULL);
  setbuf(stdin, NULL);

  char buffer[512];
  int leido = 0;
  while ((leido = read(0, &buffer, 256)) > 0)
  {
    write(1, buffer, leido);
  }
}
