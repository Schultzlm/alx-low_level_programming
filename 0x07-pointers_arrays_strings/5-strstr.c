#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input one
 * @needle: input two
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *p = needle;

		while (*h == *p && *p != '\0')
		{
			h++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
