#include <stdlib.h>

void schultz(void) __attribute__((constructor));

/**
 * schultz - A function that prints first before main is executed
 *
 * Return: Nothing
 */
void schultz(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
