#include "search_algos.h"
#include <math.h>

/**
 * check_array - Searches a mini-array
 * @arr: Pointer array
 * @size: size
 * @min: Index of the first element
 * @max: Index of the last element
 * @value: Value to find
 * Return: Index at value
 */

int check_array(int *arr, size_t size, size_t min, size_t max, int value)
{
	size_t j = 0;

	for (j = min; j <= max && j < size; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, arr[j]);
		if (arr[j] == value)
			return (j);
	}
	return (-1);
}

/**
 * jump_search - Searches an array using jump algorithm
 * @array: Pointer to the first element
 * @size: Size of the array to search
 * @value: Value to find
 * Return: Index at value else -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t v = 0, i = 0;
	char *msg = "Value found between indexes";

	if (array == NULL || size < 1)
		return (-1);
	v = sqrt(size);
	for (i = 0; i < size; i += v)
	{
		if (array[i] == value)
		{
			printf("%s [%lu] and [%lu]\n", msg, i - v, i);
			return (check_array(array, size, i - v, i, value));
		}
		else if (value < array[i])
		{
			printf("%s [%lu] and [%lu]\n", msg, i - v, i);
			return (check_array(array, size, i - v, i, value));
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	printf("%s [%lu] and [%lu]\n", msg, i - v, i);
	return (check_array(array, size, i - v, i, value));
}
