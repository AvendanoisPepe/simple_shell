#include "shell.h"

int getstringleng(char *string)
{
	int iterador = 0;
	while (string[iterador])
	{
		iterador++;
		}
	return iterador;
}

int main()
{
	char *pront = ":D ", *token, *line;
	size_t lineSize = 0;
    	const char *separator = " ";
    	int iteratorToken, longi, input = 0;

    	while (1)
    	{
		write(STDOUT_FILENO, pront, getstringleng(pront));

		input = getline(&line, &lineSize, stdin);

		if (input == -1)
		{
			write(STDOUT_FILENO, "Exit\n", 5);
			break;
		}
        	else
        	{
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
		}
    	}
    	return 0;
}
