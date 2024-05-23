#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include<stdio.h>
#include<stddef.h>

/* function prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

/* helper functions */
void print_array(int *array, size_t start, size_t end);

#endif
