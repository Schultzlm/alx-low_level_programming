#include "search_algos.h"

/**
 * mini_array - Prints a mini-array
 * @arr: Pointer to first element of array
 * @min: index of the lowest element
 * @max: index of the highest element
 */

void mini_array(int *arr, size_t min, size_t max)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = min; i < max; i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[i]);
}

/**
 * binary_search - Searches a sorted array using binary algorithm
 * @array: Pointer to first element of array to search
 * @size: Size of the array
 * @value: Value to find
 * Return: index at value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t min = 0, mid = 0, max = 0;

	if (array == NULL || size < 1)
		return (-1);
	max = size - 1;

	while (min <= max)
	{
		mini_array(array, min, max);
		mid = (min + max) / 2;
		if (array[mid] > value)
			max = mid - 1;
		else if (array[mid] < value)
			min = mid + 1;
		else
			return (mid);
	}
	return (-1);
}

