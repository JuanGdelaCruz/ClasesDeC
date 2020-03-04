#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
        exit(-1);

    int tub[2];
    if (pipe(tub) < 0)
        fprintf(stderr, "Pipe() failed!\n");

    pid_t pid = fork();
    switch (pid)
    {
    case -1:
        fprintf(stderr, "Fork() failed!");
        break;
    case 0:
    {
        close(0);
        dup(tub[0]);
        close(tub[0]);
        close(tub[1]);
        char buffer[128];
        char string[128];
        int n = 0;
        while ((n = read(0, buffer, 128)) > 0)
        {
            int i;
            for (i = 0; i < n; i++)
                string[i] = buffer[i];
            string[i + 1] = '\0';
            fprintf(stdout, "child> %s", string);
        }
        break;
    }
    default:
    {
        close(tub[0]);
        close(1);
        dup(tub[1]);
        close(tub[1]);
        execvp(argv[1], &argv[1]);
        fprintf(stderr, "Execv() failed!");
        break;
    }
    }
}
