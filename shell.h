#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>


int _excev(char *tokame);
void prompt(void);
char *tokenizar(char *line, const char *separator);
int getstringleng(char *string);


#endif