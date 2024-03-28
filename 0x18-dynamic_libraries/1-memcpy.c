#include "main.h"

/**
 * _memcpy - function copies @n bytes from memory area @src
 * to memory area @dest
 * @n: bytes amount
 * @dest:  memory area
 * @src: memory is copied
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int ux;
	int ei = n;

	for (ux = 0; ux < ei; ux++)
	{
		dest[ux] = src[ux];
		n--;
	}

	return (dest);
}
