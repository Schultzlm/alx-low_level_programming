#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: value for the triangle
 *
 * Return: none
 */
void print_triangle(int n)
{
	int h; tri;

	if (n > 0)
	{
		for (h = 1; h <= n; h++)
		{
			for (tri = n - h; tri > 0; tri++)
				_putchar(' ');

			for (tri = 0; tri < h; tri++)
				_putchar('#');

			if (h == n)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
