#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: Hash table name/identifier.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int J;
	hash_node_t *node;

	J = 0;

	while (J < ht->size)
	{
		while (ht->array[J] != NULL)
		{
			node = ht->array[J]->next;
			free(ht->array[J]->key);
			free(ht->array[J]->value);
			free(ht->array[J]);
			ht->array[J] = node;
		}
		J++;
	}
	free(ht->array);
	free(ht);
}
