#include "hash_tables.h"

/**
 * key_index - provides a key index
 * @key: key, a string.
 * @size: the size of the array of the hash table.
 * Return: Index num for the key/value pair in the hash table array.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
