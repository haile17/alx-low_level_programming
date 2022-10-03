#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * search for a value in an array of integers
 * using the linear search algorithm
 * @array is the pointer to the first element
 * @size is the number 
 * @value is the value 
 *
 * if value is not present return -1 if not found 
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);
	while (i < size)
	{
		printf("Vlaue checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
