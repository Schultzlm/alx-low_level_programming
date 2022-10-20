#include "main.h"

/**
 * print_line - This draws a straight line using a character_.
 * @n: The number of _ characters to be printed.
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
	for (line = 0; line <= n; line++)
	{
	_putchar('_');
	}
	}
	_putchar('\n');
}
