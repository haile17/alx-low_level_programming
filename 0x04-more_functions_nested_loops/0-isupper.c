#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks if a char is a capital letter
 * @c: the letter to be checked
 * Return: 1 if the char is upper case
 * 0 if the char is lower case
 */

int _isupper(int c)
{

int result;
if (isupper(c) == 0)
	result = 0;
else
	result = 1;
return (result);
}
