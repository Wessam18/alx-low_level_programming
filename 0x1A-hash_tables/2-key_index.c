#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in the hash table array.
 * @key: The key (string) for which to calculate the index.
 * @size: The size of the array in the hash table.
 *
 * Return: The index at which the key should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
		return (0);

	/* Use the hash_djb2 function to calculate the hash value */
	hash_value = hash_djb2(key);

	/* Return the calculated index within the size of the array */
	return (hash_value % size);
}
