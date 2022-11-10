#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
#include <stddef.h>
#include <sys/types.h>
#include <errno.h>
#include <signal.h>
#include <sys/stat.h>

int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
char *_strdup(char *str);
char *concat_all(char *name, char *sep, char *value);

char **splitstring(char *str, const char *delim);
