#include "shell.h"
/**
 * child_process - create a chlid process.
 * Return: Always 0.
 */
pid_t child_process(void)
{
	pid_t process;

	process = fork();

	if (process < 0)
	{
		perror("Fork failed");
		return (-1);
	}
	else
		return (process);
}
/**
 * _excev - execution program
 * @token: ** pointer recived arguments.
 * Return: Always 0.
 */
int _excev(char **token)
{
	int i = 0, j = 0;
	char *argv[1024];

	argv[0] = check_path(token[0]);
	for (i = 1, j = 0; token[j]; i++, j++)
	{
		argv[i] = token[i];
	}
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("fail");
		exit(EXIT_SUCCESS);
	}
	return (0);
}
/**
 * ctrol - command ctrl+c
 * @number: flag signal
 */
void ctrol(int number __attribute__((unused)))
{
	signal(SIGINT, ctrol);
	write(STDOUT_FILENO, "\n:D : ", 6);
	fflush(stdout);
}
