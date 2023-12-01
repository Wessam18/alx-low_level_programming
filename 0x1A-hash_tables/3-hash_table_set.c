#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to which the element should be added.
 * @key: The key for the element. Cannot be an empty string.
 * @value: The value associated with the key. Must be duplicated.
 *
 * Return: 1 if the addition succeeds, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node, *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);  /* Free existing value */
			temp->value = strdup(value);  /* Duplicate and set new value */
			if (temp->value == NULL)
				return (0); /* Memory allocation for value failed */
			return (1); /* Update successful */
		}
		temp = temp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0); /* Memory allocation for new node failed */
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0); /* Memory allocation for key failed */
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0); /* Memory allocation for value failed */
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
