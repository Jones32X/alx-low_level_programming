#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to be copied
 * @n: amount of times to copy b
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int u;

	u = 0;

	for (; u < n; u++)
	{
		s[u] = b;
	}

	return (s);
}
