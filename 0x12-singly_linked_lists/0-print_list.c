#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: list to print elements of
 *
 * Return: size_t of the list
 */
size_t print_list(const list_t *h)
{
	size_t jay = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;

		jay++;
	}
	return (jay);
}
