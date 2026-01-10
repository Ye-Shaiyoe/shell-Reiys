#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/utsname.h>
#include <sys/sysinfo.h>

#define MAX_INPUT 1024
#define MAX_ARGS 64

void print_banner(void);
void print_sysinfo(void);
void print_prompt(void);

int builtin_cd(char **args);
int builtin_pwd(char **args);
int builtin_echo(char **args);
int builtin_clear(char **args);

#endif