#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  char buffer[512];
  int leido = 0;
  while ((leido = read(0, &buffer, 256)) > 0)
  {
    write(1, buffer, leido);
  }
}
