#include <stdio.h>

/**
 * main - prints the numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	int num;
	int el;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (el = 'a'; el <= 'f'; el++)
		putchar(el);

	putchar('\n');

	return (0);
}
