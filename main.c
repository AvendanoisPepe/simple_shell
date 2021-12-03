#include "shell.h"

/**
 * _excev - execve example
 *
 * Return: Always 0.
 */
int main ()
{
	char  *line;
	size_t lineSize = 0;
	int input = 0;
	pid_t idenprocess;

	while (1)
	{
		prompt();
		input = getline(&line, &lineSize, stdin);
		line[input - 1] = '\0'; 
		_arguments(line);
		if (input == -1)
		{
			write(STDOUT_FILENO, "logout\n", 7);
			break;
		}
		else
		{
			idenprocess = fork();
			if (idenprocess == 0)
			{  
				check_path(line);
			}
			if (idenprocess == 0)
			{
				tokenizer(line, " ");
			}
			else 
				wait (NULL);
		}
	}	
	return 0;
}
