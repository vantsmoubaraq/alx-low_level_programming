#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 *
 * @head: first node of the list
 *
 * Return: sum or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *current;

	if (head == NULL)
	{
		return (0);
	}

	current = head;

	while (current)
	{
		total += current->n;
		current = current->next;
	}
	return (total);
}
