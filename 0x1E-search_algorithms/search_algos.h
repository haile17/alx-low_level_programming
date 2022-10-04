#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int help_binary(int *array, int value, size_t low, size_t high);
void array_print(int *array, size_t low, size_t high);
int interpolation_search(int *array, size_t size, int value);
int recursive_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary_recursive(int *array, size_t left, size_t right, int value);
listint_t *jump_list(listint_t *list, size_t size, int value)
skiplist_t *linear_skip(skiplist_t *list, int value)

#endif
