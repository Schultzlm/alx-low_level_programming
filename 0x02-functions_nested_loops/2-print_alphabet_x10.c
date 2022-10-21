#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 */
void print_alphabet_x10(void)
{
	char ten;
	int la;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}
