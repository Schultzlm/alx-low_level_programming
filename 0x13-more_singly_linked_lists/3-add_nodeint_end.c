#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 *
 *
 * @n: data to insert in the new element.
 *
 * Return: pointer to the new node, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(lisint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new->next = NULL;
	}
	else
		return (NULL);

	if (*temp != NULL)

	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	else
		*head = new_node;
	return (new_node);
}
