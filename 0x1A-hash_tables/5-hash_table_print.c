#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first = 1; /* Flag to handle commas in the output */

	if (ht == NULL)
		return; /* Do nothing if the hash table is NULL */

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			/* Print comma and space if not the first key-value pair */
			if (first == 0)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			first = 0; /* Update flag after printing the first key-value pair */
			node = node->next;
		}
	}
	printf("}\n");
}
