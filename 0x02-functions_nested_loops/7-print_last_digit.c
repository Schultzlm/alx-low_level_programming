#include "main.h"
/**
 * print_last_digit - function that prints the last digit
 * @n: takes ln an integer
 *
 * Return: returns output
 */
int print_last_digit(int n)
{
	int pk = n % 10;

	if (n < 0)
		pk = pk * -1;
	_putchar(pk + '0');
	return (pk);
}
