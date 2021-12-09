#include "shell.h"
/**
 * main - execute the program.
 * Return: Always 0.
 */
int main(void)
{
	char  *line = NULL;
	size_t lineSize = 0;
	int input = 0;
	pid_t idenprocess;

	signal(SIGINT, ctrol);
	while (1)
	{
		prompt();
		input = getline(&line, &lineSize, stdin);
		/*line[input - 1] = '\0';*/
		if (_strcmp(line, "exit\n") == 0 || input == -1)
		{
			break;
		}
		if (_strcmp(line, "env\n") == 0)
		{
			get_env();
			continue;
		}
		if (espacio(line) == 0)
		{
			continue;
		}
		else
		{
			idenprocess = child_process();
			if (idenprocess == 0)
			{
				check_path(line);
			}
			if (idenprocess == 0)
			{
				tokenizer(line, " \t\n\"");
			}
			else
				wait(NULL);
		}
	}
	free(line);
	return (0);
}
