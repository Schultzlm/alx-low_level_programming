#include "main.h"


/**
 * _memset - Fills first n bytes mem area pointed by @s with constant byte @c
 * @s: pointer to memory area to be filled
 * @b: Char to fill memory area width
 * @n: Number of bytes to be filled
 *
 * Return: Pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned  int i;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
