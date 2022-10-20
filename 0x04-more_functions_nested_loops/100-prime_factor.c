#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * Return: value
 */
int main(void)
{
	long n = 612852475143;
	long i, factor = -1;

	while (n % 2 == 0)
		n = n / 2, factor = 2;

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
			n = n / i, factor = i;
	}
	if (n > 2)
	{
		factor = n;
		printf("%li", factor);
	}
	_putchar(10);

	return (0);
}
