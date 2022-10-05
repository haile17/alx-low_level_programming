#include "search_algos.h"

/**
 * linear_search - search for a value in an array of
 * integers using the linear search algorithm
 * @array: array to search the value in
 * @size: size of the array
 * @value: is the value
 *
 * Return: the index of the found value
 * or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t h = 0;

	if (!array || size == 0)
		return (-1);
	while (h < size)
	{
		printf("Vlaue checked array[%lu] = [%d]\n", h, array[h]);
		if (array[h] == value)
			return (h);
		h++;
	}

	return (-1);
}
