#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <errno.h>

#define MAX_INPUT 1024
#define MAX_ARGS 64
#define MAX_PATH 512
#define HISTORY_SIZE 100

// Colors untuk prompt
#define COLOR_RESET   "\033[0m"
#define COLOR_BLUE    "\033[1;34m"
#define COLOR_GREEN   "\033[1;32m"
#define COLOR_RED     "\033[1;31m"
#define COLOR_YELLOW  "\033[1;33m"

// Command structure
typedef struct {
    char **args;
    int argc;
    char *input_file;
    char *output_file;
    int append;
    int background;
} Command;

// Global variables
extern volatile sig_atomic_t interrupted;
extern int last_exit_status;

#endif