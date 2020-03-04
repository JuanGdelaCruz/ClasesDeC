#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

int main(int argc, char *argv[])
{

    int fd[2];    
    if (pipe(fd) < 0)
        fprintf(stderr, "Pipe() failed!\n");

    pid_t pid = fork();
    switch (pid)
    {
    case -1:
        fprintf(stdout, "Fork() failed!");
        break;
    case 0:
    {
        close(fd[1]);
        char buffer[128];
        int n = 0;
        while ((n = read(fd[0], buffer, 1)) > 0)
        {
             write(1, buffer, n);         
        }
        close(fd[0]);
        break;
    }
    default:
    {
        close(fd[0]);
        char *string = "WOW this actually works.\n";
        write(fd[1], string, strlen(string) + 1);
        close(fd[1]);
        break;
    }
    }
}
