#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
int main(int argc, char *argv[]);
void _print(char *str, int l);
char *mul(char n, char *num, int num_index, char *dest, int dest_index);
int check_digits(char **av);
void _init(char *str, int n);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
