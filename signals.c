#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>

void my_handler();

int main(int argc, char *argv[])
{
 
    printf("This program intends to provide an insight of how signals can be used, and therefore handled.\n");
    char input[64];
    int ignore = -1, handle = -1;
    while (ignore != 0 && handle != 0)
    {
        printf("Do you want to ignore or handle the signal? [I/H]\n");
        scanf("%s", input);
        ignore = strcmp(input, "I");
        handle = strcmp(input, "H");
    }

    //Declaramos un struct del tipo sigaction.
    struct sigaction act;
    //This flag controls what happens when a signal is delivered during certain primitives (such as open, read or write).
    act.sa_flags = SA_RESTART;
    //Si el usuario ha dicho que la señal ha de ser ignorada, se ignora, y si ha de ser manejada se maneja con la función definida más abajo (my_handler).
    act.sa_handler = (ignore == 0) ? SIG_IGN : my_handler;
    // Asignamos el tipo de respuesta que hemos definido con el struct a la señal 'SIGINT' (interrupción).
    sigaction(SIGINT, &act, NULL);

    printf("A dumb prompt will appear now, type \'exit\' to end the process.\n");
    printf("Whenever you want you might send an interruption signal via pressing the key-combo \'ctrl + c\'.\n");

    do
    {
        printf("my_prompt>");
        fgets(input, 64, stdin);
    } while (strcmp(input, "exit\n") != 0);
}

void my_handler()
{
    printf("\nThe signal was succesfuly handled.\n");
    printf("Remember, you have to type \'exit\' to end this process.\n");
}