#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: the number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nodes);
}
