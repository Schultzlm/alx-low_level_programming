#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - adds all the parameters passed to it
 * @n: numbers of arguments to be passed.
 *
 * Return: the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int i;

		if (n == 0)
			return (0);

		va_list(valist, n);

		for (i = 0; i < n; i++)
		{
			sum += va_arg(valist, int);
		}
	va_end(valist);

	return (sum);
}
