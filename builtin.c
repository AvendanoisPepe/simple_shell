#include "shell.h"
/**
 * get_env - Imprime el environ.
 */
void get_env(void)
{
	int i = 0;

	while (environ[i])
	{
		write(STDOUT_FILENO, environ[i], getstringlen(environ[i]));
		write(STDOUT_FILENO, "\n", 2);
		i++;
	}
}
int espacio(char *line)
{
	int probando, i;
	int isValid = 0;

	probando = getstringlen(line);
	for (i = 0; i < probando; i++)
	{
		if (line[i] == ' ' || line[i] == '\t' || line[i] == '\n')
		{
			isValid = -1;
			i = probando;
		}else
		{
			isValid = 0;
		}
	}
	return (isValid);
}