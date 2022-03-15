#include "_putchar.h"
/**
 * main - Entry block
 * Description: prints _put char on new line
 * Return: 0
 */
int main(void)
{
	char c[10] = "_putchar";

	int i = 0;

	while (i < 9)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
