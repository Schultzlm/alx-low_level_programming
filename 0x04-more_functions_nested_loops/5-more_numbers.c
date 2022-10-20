#include "main.h"

/**
 * more_numbers - print serie of numbers
 *
 * Return: None
 */

void more_numbers(void)
{
	int count, c, a, b;

	for (c = 0; c < 10; c++)
	{
		for (count = 0; count <= 14; count++)
		{
			a = count;
			if (count > 9)
			{
				a = count / 10;
				b = count % 10;
			}

			_putchar(a + '0');
			if (count > 9)
				_putchar(b + '0');
		}
		_putchar('\n');
	}
}
