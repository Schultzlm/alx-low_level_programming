#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input one
 * @accept: input two
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
				return (s);
		}
		s++;
	}
	return ('\0');
}
