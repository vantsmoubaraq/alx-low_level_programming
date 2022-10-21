#include "hash_tables.h"

/**
 * hash_table_delete - free hash table
 *
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *current, *tmp;


	while (idx < ht->size)
	{
		if (ht->array[idx] != NULL)
		{
		current = ht->array[idx];

		while (current)
		{
			tmp =  current->next;
			free(current->value);
			free(current->key);
			free(current);
			current = tmp;
		}
		idx++;
		}
	}
	free(ht->array);
	free(ht);
}
