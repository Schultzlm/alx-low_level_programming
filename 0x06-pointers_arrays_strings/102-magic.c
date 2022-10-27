#include <stdio.h>

/**
 * main - the program prints 98, followed by a new line.
 * Return: 0 Success
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write your line of code here
	 * - You are not allowed to modify the variable p
	 */
	*(p + 5) = 98;
	/* the following code prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
