#include "shell.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _excev - 
 *
 * Return: Always 0.
 */
int _excev(char *token)
{
	char *path = check_path(desttok);
	char *argv[1024];
	int i, j;
	argv[0] = path;

	for (i = 1, j = 1;desttok[j]; i++,j++)
	{
		argv[i] = desttok
	}
	/*char *argv[2] = {NULL, NULL};
	argv[0] = token;
	argv[1] = NULL;*/

	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
	}
	return (0);
}

/**
 * _path - search path
 *
 * Return: copy of pointer environ than contents path:.
 */
char *_path()
{
	char **save= environ, *word = "PATH", comparison[4] = {0}, *copySave;
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
}

/**
 * check_path - search path
 *
 * Return: copy of pointer environ than contents path:.
 */
char *check_path(char *line)
{
	char *phat_file, *token,*backslash = "/", *desttok;
	int value_stat;
	struct stat statvar;
	
	phat_file = _path();
	token = strtok(phat_file,":");

	while (token)
	{
		desttok = malloc(sizeof(char) * 1024);
		if (desttok == NULL)
			return (NULL); 
		token = strtok(NULL, ":");
		if (token == NULL)
			break;
		desttok = _strcat(desttok,token);
		desttok = _strcat(desttok,backslash);
		desttok = _strcat(desttok,line);
		value_stat = stat(desttok,&statvar);
		if (value_stat == 0)
		{
			_excev(desttok);
			break;
		}
		continue;
		free(desttok);
		
	}
	return(NULL);
}
/**
 * 
 *
 * Return: .
 */
char *_arguments(char *line)
{
	int  cont = 0;
	char *token, *newstring[1024];
	
	token = strtok(line, " ");
	while (line)
	{
		newstring[cont] = token;
		token = strtok(NULL, " ");
		cont++;
	}
	_excev(newstring);
	return (NULL);
}
