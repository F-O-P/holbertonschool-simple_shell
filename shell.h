#ifndef MAIN_H
#define MAIN_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <sys/stat.h>

extern char *tokens[20];

char **split_line(char *str, int *count);
void _cd(char **args);
void _exec(char **args);
int num_builtins(void);
void _help(char **args);
void sig_stop(int sNum);
char *tokstr(char *str, const char *delim, char **saveptr);
unsigned int _strspn(char *s, const char *accept);
char *_strchr(const char *s, char c);
char *_strpbrk(char *s, const char *accept);
int cleanstr(char *line);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
int _strncmp(char *s1, char *s2, int n);
int _strcmp(char *s1, char *s2);
void tokenize_path(char *path, char **paths);
int make_a_baby(char *comp_path, char **tokens);
void path_finder(char **tokens);
void **tokenize_path_the_sequel(char *line, char *delims, char **tokens);

#endif
