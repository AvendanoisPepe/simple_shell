#include "shell.h"

/**
 * _path - search path
 * Return: copy of pointer environ than contents path.
 */
char *_path()
{
	char **save = environ, *word = "PATH", comparison[4] = {0}, *copySave;
	int iterator = 0, columns = 0, compare;

	while (*save)
	{
		for (iterator = 0; iterator < 4; iterator++)
		{
			comparison[iterator] = save[columns][iterator];
		}

		compare = _strcmp(comparison, word);
		if (compare == 0)
		{
			copySave = malloc((sizeof(char) * getstringlen(*save)) + 1);
			if (copySave == NULL)
				return (NULL);
			copySave = _strncpy(copySave, *save, getstringlen(*save));
			copySave[4] = ':';
		}
		save++;
	}
	return (copySave);
	free(copySave);
}

/**
 * check_path - search path
 * @line: arguments received.
 * Return: copy of pointer environ than contents path:.
 */
char *check_path(char *line)
{
	char *phat_file, *token, *backslash = "/", *desttok[1024];
	int value_stat, i;
	struct stat statvar;

	phat_file = _path();
	token = strtok(phat_file, ":");
	for (i = 0; i < 1024; i++)
	{
		desttok[i] = NULL;
	}
	while (token)
	{
		desttok[0] = malloc(sizeof(char) * 1024);
		if (desttok == NULL)
			return (NULL);
		token = strtok(NULL, ":");
		if (token == NULL)
			break;
		desttok[0] = _strcat(desttok[0], token);
		desttok[0] = _strcat(desttok[0], backslash);
		desttok[0] = _strcat(desttok[0], line);
		value_stat = stat(desttok[0], &statvar);
		if (value_stat == 0)
		{
			return (desttok[0]);
			continue;
		}
		_strcpy(desttok[0], line);
		if (stat(desttok[0], &statvar) == 0)
		{
			return (desttok[0]);
		}
		continue;
		free(desttok);
	}
	return (NULL);
}
/**
 * tokenizer - function that separate arguments.
 * @line: arguments
 * @separator: delim to strtok, " ".
 * Return: **pointer that contents the word separated in differents positions.
 */
char *tokenizer(char *line, const char *separator)
{
	char *token, *token1[1024];
	int i = 0;

	token = strtok(line, separator);
	while (token)
	{
		token1[i] = token;
		token = strtok(NULL, separator);
		i++;
	}
	if (token1[0] != NULL)
	{
		_excev(token1);
	}
	return (token);
	free(token1);
}
