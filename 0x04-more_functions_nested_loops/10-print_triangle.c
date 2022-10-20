#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: value for the triangle
 *
 * Return: none
 */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		_putchar(10);

	for (a = size; a > 0; a--)
	{
		for (b = 1; b <= size; b++)
			if (b >= a)
				_putchar(35);
			else
				putchar(32);
		_putchar('\n');
	}
}
