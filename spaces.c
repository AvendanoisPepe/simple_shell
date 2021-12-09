#include "shell.h"

/**
 * spaces - evaluated spaces
 * @line : arguments.
 * Return: if there are characters like ' ','\t','\n'.
 * return 0 if not return 1.
 */
int spaces(char *line)
{
	int len, i;
	int isValid = 0;

	len = getstringlen(line);
	for (i = 0; i < len; i++)
	{
		if (line[i] == ' ' || line[i] == '\t' || line[i] == '\n')
		{
			isValid += 0;
		}
		else
		{
			isValid += 1;
		}
	}
	return (isValid);
}
