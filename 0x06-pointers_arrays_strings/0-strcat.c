#include "main.h"

/**
 * *_strcat - function that commute strings
 * @dest: param pointer to the character
 * @src: param pointer to the char
 *
 * Return: value of dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j]
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
