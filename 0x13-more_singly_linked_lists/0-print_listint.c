#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list.
 * @h: A pointer to the head of list
 *
 * Return: the number of nodes in a list
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
