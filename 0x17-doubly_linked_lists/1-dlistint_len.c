#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - Number of elements in a doubly linked list
 *
 * @h: head of the list
 *
 * Return: Number of nodes in a singly linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count = 0;

	if(h == NULL)
	{
		return (0);
	}

	current = h;

	while(current)
	{
		count++;
		current = current->next;
	}
	return count;
}
