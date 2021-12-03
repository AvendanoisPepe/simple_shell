#include "shell.h"

char *tokenizer(char *line, const char *separator)
{    
    char *token;
    int longi;

	separator = " ";
  	token = strtok(line, separator);

	while (token && token[0] != '\n')
	{
        /*write(STDOUT_FILENO, token, getstringleng(token));
		write(STDOUT_FILENO, "\n", 1);*/
		longi = (getstringlen(token) - 1);
		if (token[longi] == '\n')
		{
			token[longi] = '\0';
		}
		while (token[0] != '\n')
		{
			_excev(token);
			token = strtok(NULL, separator);
		}
	}
	return (token);    
}