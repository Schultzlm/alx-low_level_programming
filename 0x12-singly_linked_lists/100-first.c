#include <stdio.h>

void start(void) __attribute__ ((constructor));

/**
 * start - A function that prints first before main is executed
 *
 * Return: Nothing
 */
void start(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
