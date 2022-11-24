#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - a function that returns a number of elem in linked list
 * @h: linked list
 *
 * Return: the number of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
