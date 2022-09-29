#include "lists.h"

/**
 * insert_dnodeint_at_index - new node at a given position
 *
 * @h: address of the first node of the list
 *
 * @idx: the index of the list where the new node should be added
 *
 * @n: data of the nodes
 *
 * Return: the address of the new node, or NULL if it failed
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int j = 0, i = 0;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	current = *h;

	while (current)
	{
		j++;
		current = current->next;
	}

	if (idx < j)
	{
		current = *h;

		while (current && i < idx - 1)
		{
			current = current->next;
			i++;
		}

		current->next->prev = new;
		new->prev = current;
		new->next = current->next;
		current->next = new;

		return (new);
	}

	return (NULL);

}
