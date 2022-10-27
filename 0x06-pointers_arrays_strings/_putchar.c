#include <unistd.h>

/**
 * _putchar - writes character c to stdou
 * @c: char to be printed
 *
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
