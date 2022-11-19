#include "variadic_functions.h"

/**
 * print_strings - prints the string
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: No returns
 */
void print_strings(const char *separator, const unsigned int n, ...);
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
		{
			if (i == (n - 1))
			{
				printf("%s", str);
				break;
			}
			if (separator == NULL)
				printf("%s", str);
			else
				printf("%s%s", str, separator);
		}
		else if (str == NULL)
		{
			if (i == (n - 1))
			{
				printf("(nil)");
				break;
			}
			if (separator  == NULL)
				printf("(nil)");
			else
				printf("(nil)%s", separator);
		}
	}
	va_end(args);
}
