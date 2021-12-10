![](https://www.muyseguridad.net/wp-content/uploads/2014/09/ShellShock.jpg)

# The Gates of Shell----☠️🫁 ☠️🫁 ☠️🫁 ☠️🫁 ☠️🫁 ☠

------------

# Shell Description.

------------

Normally used for Unix-like operating systems, the shell is an interactive interface that interprets command lines. It ranges from a command typed on the keyboard using a terminal emulator, to the shell itself, which is the connection between the Linux user and the operating system to perform the requested tasks through functions, commands or scripts, since the shell also serves as a scripting language.

**in this project we have the task of creating our own simple unix shell.
**

------------

## Repo files:

------------

| Functions | Archives  |  Description |
| ------------ | ------------ | ------------ |
| 0 | AUTHORS  |  This file lists all individuals having contributed content to the repository |
| 2 | execution.c  | This file contains the function of creating the child process and executing the command typed at the prompt.  |
| 5 | functions.c  | This file has five functions which help us to make the process of the other functions clearer and shorter in its final execution.  |
| 1 | main.c  | This file has the main function that manages the whole process.  |
| 3 | path.c  | In this file we find three functions, in which we find the PATH, we compare it with what we send in the promt and a function that tokenizes when more than one command is entered.  |
| 1 | prompt.c  | In this file we have the function that confirms if our shell is interactive or not and prints the promt: ":D".  |
| 0 | shell.h  | In this file we find all our function prototypes.  |


------------

## Repository functions:

------------

| Archives  | Functions  | Description  |
| ------------ | ------------ | ------------ |
| execution.c  | child_process(void)  | Creation of a child process.  |
| execution.c  | _excev(char **token)  | Execute the command written in the prompt.  |
| builtin.c    | get_env(void)  | Evaluated spaces.  |
| spaces.c     | spaces(char *line)  | Print environment.  |
| functions.c  | getstringlen(char *string)  | Determines the length of a text string.  |
| functions.c  | *_strncpy(char *dest, char *src, int n)  | Copies a text string.  |
| functions.c  | _strcmp(char *s1, char *s2)  | Comparison of two text strings.  |
| functions.c  | *_strcat(char *dest, char *src)  | We concatenate two text strings.  |
| functions.c  | *_strcpy(char *dest, char *src)  | Copies a String.  |
| main.c  | main(void)  | Main function that manages the whole process.  |
| path.c  | *_path()  | We look for the path in the environ (Global Variables Environment).  |
| path.c | *check_path(char *line)  |  We compare what was sent in the promt with the PATH found in the previous function. |
| path.c | *tokenizer(char *line, const char *separator)  |  Separates the commands entered in the promt. |
| prompt.c | prompt(void)  | confirms whether our shell is interactive or not and prints the message: ": D".  |

------------

## Requirements

------------

- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- Your shell should not have any memory leaks
- No more than 5 functions per file
- All your header files should be include guarded
- Use system calls only when you need to.

------------

## Installation:

------------

To use our shell you must follow these steps.
1 - To clone the repository use this command where you want to save the repository: git clone https://github.com/AvendanoisPepe/simple_shell.git.
2 - To compile the code in your console (local Terminal) or in your sandbox, access the local repository location and use this command: 

``gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh``

3 - Type in your console " ./hsh", and you will be running the code showing the promt.
4 - To terminate program execution or close the shell: press Ctrl + D or type in the prompt "Exit".

------------

## Examples:

------------


Commands such as: ls and its derivatives, pwd, cat and echo.
### Ls:
```c
:D : ls
AUTHORS    execution.c  main.c              prompt.c
README.md  functions.c  man_1_simple_shell  shell.h
builtin.c  hsh          path.c              spaces.c
:D : ls -la
total 52
drwxrwxrwx 1 caritoespi caritoespi  4096 Dec  9 19:23 .
drwxrwxrwx 1 caritoespi caritoespi  4096 Dec  7 13:07 ..
drwxrwxrwx 1 caritoespi caritoespi  4096 Dec  9 16:44 .git
-rwxrwxrwx 1 caritoespi caritoespi   272 Dec  7 13:37 AUTHORS
-rwxrwxrwx 1 caritoespi caritoespi  7079 Dec  9 19:24 README.md
-rwxrwxrwx 1 caritoespi caritoespi   220 Dec  9 10:04 builtin.c
-rwxrwxrwx 1 caritoespi caritoespi   795 Dec  9 15:53 execution.c
-rwxrwxrwx 1 caritoespi caritoespi  1370 Dec  7 13:37 functions.c
-rwxrwxrwx 1 caritoespi caritoespi 18184 Dec  9 19:23 hsh
-rwxrwxrwx 1 caritoespi caritoespi   776 Dec  9 15:59 main.c
-rwxrwxrwx 1 caritoespi caritoespi  1773 Dec  9 19:24 man_1_simple_shell
-rwxrwxrwx 1 caritoespi caritoespi  2083 Dec  9 13:26 path.c
-rwxrwxrwx 1 caritoespi caritoespi   208 Dec  7 13:37 prompt.c
-rwxrwxrwx 1 caritoespi caritoespi   674 Dec  9 10:04 shell.h
-rwxrwxrwx 1 caritoespi caritoespi   418 Dec  8 23:07 spaces.c
```
### pwd:
```c
:D : pwd
/home/vagrant/simple_shell/simple_shell
```
### cat (file.c):
```c
:D : cat prompt.c
#include "shell.h"
/**
 * prompt - prints promp
 *
 * Return: Always 0.
 */

void prompt(void)
{
        char *promt = ":D : ";

        if (isatty(STDIN_FILENO) == 1)
                write(STDOUT_FILENO, promt, getstringlen(promt));
}
```
### echo (word):
```c
:D : echo I have the flu :(
I have the flu :(
```

------------

Commands such as: ls and pwd by entering the full path.

------------


### Ls:
```c
:D : /bin/ls
 AUTHORS    builtin.c    functions.c  main.c              path.c    shell.h
README.md  execution.c  hsh          man_1_simple_shell  prompt.c  spaces.c
```
### pwd:
```c
:D : /bin/pwd
/home/vagrant/simple_shell/simple_shell
```
------------


## Special commands:

------------

    Ctrl + D : Exits Shell.

    Ctrl + C : To prevent the shell from closing.


## Flowchart:
First, a flowchart was generated which contains data input, cycles, functions, structures and with which the logic was based to generate the source code of our function.

![](https://scontent.fbog4-1.fna.fbcdn.net/v/t39.30808-6/263840334_3053735084891201_161661929072647008_n.jpg?_nc_cat=105&_nc_rgb565=1&ccb=1-5&_nc_sid=730e14&_nc_eui2=AeFdWpNWWGebcWFl99-nkWVcLnjn2jvOhpUueOfaO86GlW89Zz3ID5SaLq-wlSVRWb6c5SSIG1Xxm9D8tj3lQrev&_nc_ohc=8_TMlvCAARoAX8X7Em6&tn=L38CwoRKb5t4MH73&_nc_ht=scontent.fbog4-1.fna&oh=e141e96c93bb12cd55f0c829ddeb5073&oe=61B3F28C)

# Authors:
## Carolina Espitia: 
- Git: https://github.com/caritoespicaita
- Twitter: https://twitter.com/karolitablue
- Linkedin: https://www.linkedin.com/in/carolina-espitia-caita-669621b6
## Jhon Gonzalez: 
- Git: https://github.com/jhonholberton
- Twitter:@jhonholberton
- Linkedin: https://www.linkedin.com/in/jhon-gonzalez-354487202
## Juan Sebastian Avendaño Gonzalez:
- Git: https://github.com/AvendanoisPepe
- Twitter: https://twitter.com/Sebastian_Aven
- Linkedin: https://www.linkedin.com/in/juan-sebastian-avenda%C3%B1o-gonz%C3%A1lez-8b1185200/

