#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input integer array
 * @size: size of the array
 * @cmp: pointer to func to be used to compare values
 *
 * Return: -1 If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (x = 0; x < size; x++)
			if (cmp(array[x]))
				return (x);
	}

	return (-1);
}
