#include "variadic_functions.h"

/**
 * sum_them_all - adds all the parameters passed to it
 * @n: numbers of arguments to be passed
 *
 * Return: the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list params

		va_start(params, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
			sum += va_arg(params, int);
	}
	va_end(params);

	return (sum);
}
