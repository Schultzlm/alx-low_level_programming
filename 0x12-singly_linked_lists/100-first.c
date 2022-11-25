#include <stdio.h>

void main(void) __attribute__ ((constructor));

/**
 * main - A function that prints first before main is executed
 *
 * Return: Nothing
 */
void main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
