#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

int main(int argc, char *argv[])
{

    int tub[2];
    if (pipe(tub) < 0)
        fprintf(stderr, "Pipe() failed!\n");

    pid_t pid = fork();
    switch (pid)
    {
    case -1:
        fprintf(stdout, "Fork() failed!");
        break;
    case 0:
    {
        // close(0);
        // dup(tub[0]);
        dup2(tub[0] ,0);
        close(tub[0]);
        close(tub[1]);

        char string[128];
        read(0, string, 128);
        fprintf(stdout, "%s", string);
        break;
    }
    default:
    {
        close(tub[0]);
        close(1);
        dup(tub[1]);
        close(tub[1]);
        char *string = "Mandando mensaje al hijo.\n";
        write(1, string, strlen(string));
        break;
    }
    }
}
