#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - a function that adds a new node at beginning of list
 * @head: The  main linlked list
 * @str: the string to add to the node
 *
 * Return: address of a new list or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);
		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;

		*head = temp;

		return (temp);
	}
	return (0);
}

/**
 * _strlen - length of a sring
 * @s: The string to count
 *
 * Return: string length
 */
int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}
	return (c);
}
