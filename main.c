#include "shell.h"


int main ()
{
  char *promt = ":D ", *token, *line;
	size_t lineSize = 0;
  int iteratorToken, longi, input = 0;
  const char *separator = " ";
  pid_t idenprocess;

while (1)
{

		write(STDOUT_FILENO, promt, getstringleng(promt));
    
		input = getline(&line, &lineSize, stdin);
    
		if (input == -1)
		{
			write(STDOUT_FILENO, "logout \n", 7);
			break;
		}
    else
    {
      idenprocess = fork();
      if (idenprocess == 0)
      {
        tokenizar(line, separator);
      }
      else
      {
        wait (NULL);
      }      
    }
}
    	return 0;
}
