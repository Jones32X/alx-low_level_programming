#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: Hash table name/identifier.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int e;
	hash_node_t *node;

	e = 0;

	while (e < ht->size)
	{
		while (ht->array[e] != NULL)
		{
			node = ht->array[e]->next;
			free(ht->array[e]->key);
			free(ht->array[e]->value);
			free(ht->array[e]);
			ht->array[e] = node;
		}
		e++;
	}
	free(ht->array);
	free(ht);
}
