#include "shell.h"

char *tokenizar(char *line, const char *separator)
{
    
    char *token;
    separator = " ";
    int longi, input = 0;

  	token = strtok(line, separator);

	while (token && token[0] != '\n')
	{
        write(STDOUT_FILENO, token, getstringleng(token));
		write(STDOUT_FILENO, "\n", 1);

		longi = (getstringleng(token) - 1);
     

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
    // ls -a -l ->tokenizar cuando se lee el comando del usuario
    // bin/ usr:bin:game/usr cuando se lee el path 
}