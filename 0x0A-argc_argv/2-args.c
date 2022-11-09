#include <stdio.h>
#include "main.h"

/**
 * main - Entry level
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count = 0;

	if (argc > 0)
	{
		/*WHILE - print each arguments*/
		while (count  < argc)
		{
			printf("%s\n", argv[count]);
