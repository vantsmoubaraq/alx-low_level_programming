#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node of a doubly linked list
 *
 * @head: firstnode of doubly linked list
 *
 * @index: position of head to return
 *
 * Return: the nth node if successful or NULL otherwise
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j = 0, i = 0;
	dlistint_t *current;

	current = head;

	while (current)
	{
		j++;
		current = current->next;
	}

	if (index < j)
	{
		current = head;

		while (current && i < index)
		{
			current = current->next;
			i++;
		}
		return (current);
	}
	return (NULL);
}
