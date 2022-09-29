#include "lists.h"

/**
 *  free_dlistint - frees a doubly linked list
 *
 *  @head: first node of list
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp, *current;

	current = head;

	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
}
