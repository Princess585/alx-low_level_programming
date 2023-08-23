#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str);
char *create_array(unsigned int size, char c);
int **alloc_grid(int width, int height);
char *str_concat(char *s1, char *s2);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif	
