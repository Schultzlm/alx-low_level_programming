#include "search_algos.h"

/**
 * bin_recursive - search for val in sorted int array using Binary search alg
 * @array: pointer to int array
 * @value: value to find
 * @first: first index of subarray
 * @last: last index of subarray
 * Return: index of first match or -1 if not found
 */

int bin_recursive(int *array, size_t first, size_t last, int value)
{
	size_t i;

	if (last < first)
		return (-1);
	printf("Searching in array: ");
	for (i = first; i < last; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	i = first + (last - first) / 2;
	if (array[i] == value && (i == first || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (bin_recursive(array, first, i, value));
	return (bin_recursive(array, i + 1, last, value));
}


/**
 * advanced_binary - search for value in sorted int array w Binary search alg
 * @array: pointer to int array
 * @size: size of array
 * @value: value to find
 * Return: index of first match or -1 if not found
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size < 1)
		return (-1);
	return (bin_recursive(array, 0, size - 1, value));
}
