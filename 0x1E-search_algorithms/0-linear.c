#include "search_algos.h"

/**
 * linear_search - Searches an array using linear algorithm
 * @array: Pointer to 1st element of array to search
 * @size: Size of the array
 * @value: Value to find
 * Return: First index of value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
