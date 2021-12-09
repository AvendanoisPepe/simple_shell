#include "shell.h"

/**
 * get_env - print environ.
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

/**
 * get_env - print exit.
 */
int get_exit(char *line)
{
	struct stat statvar;
	
	if (stat(line, &statvar) != 0)
	{
		return (2);
	}
	else
		return (EXIT_SUCCESS);
}