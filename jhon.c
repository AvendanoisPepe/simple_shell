#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
    char texto[] = "matame; suicidame; arrollame; ayuda";
    const char *separador = ";";
    char *token;

    token = strtok(texto, separador);

    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, separador);
    }
    return 0;
}