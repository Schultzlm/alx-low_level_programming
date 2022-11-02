
/*
 * File: 6-is_prime_number.c
 * Author: Schultz Redd
 */
#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - Checks if a number is divisible
 * @num: The number to be checked
 * @div: the divisor
 *
 * Return: if the number is divisible - 0 otherwise 1
 */
int is divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}
