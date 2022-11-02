#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - evaluate if it is an integer or not
 * @n: the number to evaluate
 *
 * Return: 1 if n is a prime number and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculate how recursively a prime number is
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
