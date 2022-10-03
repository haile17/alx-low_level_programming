#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * binary_search - searchs for a value in an array of
 * integers using the binary search algorithm
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to look for
 *
 * Return: the index of the found value,
 * or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (help_binary(array, value, 0, size - 1));
}

/**
 * help_binary - searchs for a vlue in an array of
 * integer using recursion
 * @array: array to search the value in
 * @value: value to look for
 * @low: index of the low bound
 * @high: index of the high bound
 *
 * Return: the index of the found value,
 * or -1 if not found
 */
int help_binary(int *array, int value, size_t low, size_t high)
{
	size_t middle;

	array_print(array, low, high);
	if (high == low && array[low] != value)
		return (-1);
	middle = ((high - low) / 2) + low;
	if (array[middle] == value)
		return (middle);
	if (array[middle] < value)
		return (help_binary(array, value, middle +1, high));
	if (array[middle] > value)
		return (help_binary(array, value, low, middle -1));
	return (-1);	
}
/**
 * array_print - prints an array
 * @array: array to print
 * @low: index of the low bound
 * @high: index of the high bound
 */
void array_print(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n ");
}
