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
	unsigned long int a;
	unsigned char comma_flag = 0;

	a = 0;


	if (ht == NULL)
		return;

	printf("{");
	for (; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			node = ht->array[a];
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
