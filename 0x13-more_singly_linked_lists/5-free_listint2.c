#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of the list
 *
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *deg;

	if (head != NULL)
	{
		deg = *head;
		while ((temp = deg) != NULL)
		{
			deg = deg->next;
			free(temp);
		}
		*head = NULL;
	}
}
