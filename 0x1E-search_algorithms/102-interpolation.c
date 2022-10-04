#include "search_algos.h"

/**
 * interpolation_search - search for a value in a sorted array
 * of integers using interpolation search
 * @array: a pointer to the first elements in the array
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: if the value is not present or the array is Null, -1.
 * otherwise, the first index where the value is located.
 *
 * description: prints a value every time it is compared in the array
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);
	for (l = 0, r = size - 1; r >= l;)
	{
		i = 1 + (((double)(r - 1) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}
	return (-1);
}
