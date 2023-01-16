#include "main.h"

/**
 * _memcpy - fuction that copies memory area
 * @dest: destionation for storage
 * @src: source of the bytes to copy.
 * @n: number of bytes to copy over.
 *
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int s = n;

	for (; r < s; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
