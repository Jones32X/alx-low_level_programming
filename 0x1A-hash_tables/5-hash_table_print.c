#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: Points to hash table to print.
 * Description: Key/value pairs printed
 * in thier order in which they appear
 * in the array of the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int K;
	unsigned char comma_flag = 0;

	K = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (; K < ht->size; K++)
	{
		if (ht->array[K] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			node = ht->array[K];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
