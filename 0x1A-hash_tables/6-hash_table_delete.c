#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *next;

	if (ht == NULL)
		return; /* Do nothing if the hash table is NULL */

	/* Iterate through each index in the hash table's array */
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		/* Free nodes in the linked list at each index */
		while (current != NULL)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}

	/* Free the array and the hash table structure itself */
	free(ht->array);
	free(ht);
}
