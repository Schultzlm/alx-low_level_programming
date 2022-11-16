#include "function_pointers.h"

/**
 * array_iterator - Executes func given as param on each element of array
 * @array: Input int array
 * @size: The array size
 * @action: ptr to function
 *
 * Return: nothing th return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int s;

	if (array && action)
		for (s = 0; s < size; s++)
			action(array[s]);
}
