#include "hash_tables.h"

/**
 * hash_djb2 - The Hash function implements
 * the djb2 algorithm.
 * @str: String to be hashed.
 * Return: Hash that is calculated.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	int K;
	unsigned long int hash;

	hash = 5381;
	while ((K = *str++))
		hash = ((hash << 5) + hash) + K; /* hash * 33 + K */

	return (hash);
}
