#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 *
 * @head: address to head of the list
 *
 * @n: data of the nodes
 *
 * Return: Address of new node if successful or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

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
	new->prev = NULL;

	if (*head == NULL)
	{
		(*head) = new;
		return (new);
	}


	new->next = (*head);
	(*head)->prev = new;
	(*head) = new;

	return (new);
}
