#include "main.h"

/**
 * is_prime_number - returns 1 if n is prime
 * @n: number to be checked
 *
 * Return: 1 if the n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int ssl = n / 2;

	if (n < 1)
		return (0);
	return (is_prime(n, ssl));
}

/**
 * is_prime - returns a 1 if n is prime
 * @n: number to be checked
 * @ssl: number to start checking from
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime(int n, int ssl)
{
	if (ssl < 1)
		return (1);
	else if (n % ssl > 0)
		return (0);
	return (is_prime(n, ssl - 1));
}
