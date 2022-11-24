#include <stdlib.h>

void __attribute__((constructor)) schultz(void);

/**
 * schultz - A function that prints first before main is executed
 *
 * Return: Nothing
 */
void schultz(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
