#include <stdio.h>
#include <math.h>

/**
 * main - Print the largest prime factor of the number 1231952
 * Return: Always 0 (Success)
 */
int main(void)
{
long x, maxf;
long number = 1231952;
double square = sqrt(number);

for (x = 1; x <= square; x++)
{
if (number % x == 0)
{
maxf = number / x;
}
}

printf("%ld\n", maxf);

return (0);
}
