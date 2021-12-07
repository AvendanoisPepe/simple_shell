#include "shell.h"
/**
 * main - execute the program.
 * Return: Always 0.
 */
int main(void)
{
	char  *line;
	size_t lineSize = 0;
	int input = 0;
	pid_t idenprocess;

	signal(SIGINT, ctrol);
	while (1)
	{
		prompt();
		input = getline(&line, &lineSize, stdin);
		line[input - 1] = '\0';
		if (_strcmp(line, "exit") == 0)
		{
			write(STDOUT_FILENO, "logout\n", 7);
			break;
		}
		if (_strcmp(line, "env") == 0)
			get_env();
		if (input == -1)
		{
			write(STDOUT_FILENO, "logout\n", 7);
			break;
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
