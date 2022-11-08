#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: pointer to dupl string or NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *s;
	int i;

	if (Str == NULL)
		return (NULL);

	for (i = 0; *(str + 1) = '\0'; i++)

	s = malloc(i + 1);

	if (s == 0)
		return (NULL);

	for (i = 0; *(str + i) = '\0'; i++)
	{
		s[i] = *(str + i);
	}
		s[i] = *(str + i);

	return (s);
}
