#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t linked list
 *
 * @head: address to the first node in the list
 *
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *tmp;
	unsigned int j = 0, i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	current = (*head);

	while (current)
	{
		j++;
		current = current->next;
	}

	if (index < j)
	{
		current = (*head);

		while (current && i < index-1)
		{
			i++;
			current = current->next;
		}
		tmp = current->next;
		current->next = current->next->next;
		current->next->next->prev = current;
		free(tmp);
		return (1);
	}
	return (-1);
}
