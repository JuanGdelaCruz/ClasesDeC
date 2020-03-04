#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{

    pid_t pid = fork();
    switch (pid)
    {
    case -1:
        fprintf(stdout, "Woopsie dopsie");
        break;
    case 0:
        fprintf(stdout, "NOOOOOOOOOOOOOOOO!\n");
        break;

    default:
        fprintf(stdout, "Luke I´m your father!\nYour real name is %d\n",pid);
        break;
    }

}
