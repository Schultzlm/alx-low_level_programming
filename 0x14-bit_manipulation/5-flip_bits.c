#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip
 * @n: number 1ne
 * @m: number tw2
 *
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sbits;

	for (sbits = 0; n || m; n >>= 1)
	{
		if ((n & 1) != (m & 1))
			sbits++;
	}

	return (sbits);
}
