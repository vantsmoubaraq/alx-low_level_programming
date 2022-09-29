#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 *
 * @head: address to the first node of the list
 *
 * @n: data of the nodes
 *
 * Return:the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	if (head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	current = (*head);

	while (current->next)
	{
		current = current->next;
	}

	current->next = new;
	new->prev = current;
	return (new);
}
