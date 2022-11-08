#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of the sizeand assign char c
 * @size: size of array
 * @c: char to assign
 * Description:  create array of chars,initializes it with specific char.
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
