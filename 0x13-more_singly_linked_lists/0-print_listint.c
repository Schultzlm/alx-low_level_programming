#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a list.
 * @h: A pointer to the head of list
 *
 * Return: the number of nodes in a list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
