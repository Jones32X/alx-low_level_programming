#include "main.h"

/**
 * *_memcpy - copies the memory area
 * @dest: destination of memory area
 * @src: memory area to copy from
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int e;

	for (; e < n; e++)
	{
		dest[e] = src[e];
	}

	return (dest);
}
