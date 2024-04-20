#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in a hash table.
 * @ht: Pointer points to hash table.
 * @key: key to add - cannot be an empty string.
 * @value: Val associated with key.
 * Return: Upon failure - 0.
 * Elsse - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int T;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (T = index; ht->array[T]; T++)
	{
		if (strcmp(ht->array[T]->key, key) == 0)
		{
			free(ht->array[T]->value);
			ht->array[T]->value = value_copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
