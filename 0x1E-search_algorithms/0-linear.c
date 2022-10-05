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
 *
 * Description: prints a value every time it is compared in the array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t h = 0;

	if (array == NULL)
		return (-1);
	for (h = 0; h < size; h++)
	{
		printf("Vlaue checked array[%li] = [%i]\n", h, array[h]);
		if (array[h] == value)
			return (h);
	}

	return (-1);
}
