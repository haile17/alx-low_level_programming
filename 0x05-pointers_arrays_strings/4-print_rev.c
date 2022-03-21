#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void print_rev(char *s)
{
	int i = 0;
	int lenStr, c = 0;
	char newStr;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	lenStr = i;


	for (i = 0; i < lenStr / 2; i++)
	{
		temp = s[i];
		s[i] = s[lenStr - i - 1];
		s[lenStr - i - 1] = temp;
	}

	while (s[c] != '\0')
	{
		_putchar(s);
		c++;
	}

	_putchar('\n');
}
