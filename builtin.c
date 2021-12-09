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
