#ifndef PATHFINDER_H
#define PATHFINDER_H

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <malloc/malloc.h>
#include <fcntl.h>
#include "../libmx/inc/libmx.h"

//Error function
void mx_printerr(const char *s);
int mx_err_handling(const char *file);
void mx_error_invalid_line(int line);
int mx_check_line(const char *file);
// void mx_check_unique_island(const char *file);

//Additional functions
int mx_file_size(const char *file);
int mx_atoi(const char *str);
int mx_check_digit(const char *s, int n, int line_nbr);
char **mx_get_strarr(const char *file);
int mx_get_arr_size(char **arr);
int mx_pf_count_word(char *s, const char *delim);

char **mx_pf_split(char *s);//, const char *delim);


//Basic functions

#endif
