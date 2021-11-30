#include "shell.h"

int getstringleng(char *string)
{
	int iterador = 0;
	while (string[iterador])
	{
		iterador++;
		}
	return iterador;
}



void prompt(void)
{
	char *promt = ":D ", *line;
	size_t lineSize = 0, input = 0;
    	
    if (isatty(STDIN_FILENO))
    {
	write(STDOUT_FILENO, promt, getstringleng(promt));
	input = getline(&line, &lineSize, stdin);
	}
    
}

