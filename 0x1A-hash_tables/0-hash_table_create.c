#include "hash_tables.h"

/**
 * hash_table_create - Creates hash table.
 * @size: Array Size.
 * Return: Null If an error occurs.
 * else - point to new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		return (NULL);
	}
	for (; i < size; i++)
	{
		ht->array[i] = NULL;
	}

	return (ht);
}
