#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: first input
 * @size: second input
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int metax, metay, z;

	metax = 0;
	metay = 0;

	for (z = 0; z < size; z++)
	{
		metax = metax + a[z * size + z];
	}

	for (z = size - 1; z >= 0; z--)
	{
		metay += a[z * size + (size - z - 1)];
	}

	printf("%d, %d\n", metax, metay);
}
