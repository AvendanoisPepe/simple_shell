#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <sys/wait.h>

extern char **environ;
char *_strncpy(char *dest, char *src, int n);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
int getstringlen(char *string);

void get_env(void);
int _excev(char **token);
void prompt(void);
char *tokenizer(char *line, const char *separator);
char *_path();
char *check_path(char *line);
int child_process(void);
void ctrol(int number __attribute__((unused)));
int spaces(char *line);
int main(void);

#endif
