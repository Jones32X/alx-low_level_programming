#include "main.h"
#include "stdlib.h"

/**
 * _memset - meory is filled with a constant byte
 * @s: memory area to to be used
 * @b: char t be relicated
 * @n: amount of timeto be copied
 * Return: poniter to the meory area of @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int eye = 0;

	for (; eye < n; eye++)
	{
		s[eye] = b;
	}
	return (s);
}

/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: elements amount in array
 * @size: sizes per element
 * Return: pointer to deignated memry
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);

	_memset(pointer, 0, nmemb * size);

	return (pointer);

}
