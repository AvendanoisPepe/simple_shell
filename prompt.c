#include "shell.h"
/**
 * prompt - prints promp
 *
 * Return: Always 0.
 */

void prompt(void)
{
	char *promt = ":D : ";

	if (isatty(stdin) == 1)
		write(STDOUT_FILENO, promt, getstringlen(promt));
}
