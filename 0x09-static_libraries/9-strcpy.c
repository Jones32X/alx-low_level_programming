#include "main.h"

/**
 * char *_strcpy - a function that copies the
 * string pointed to by src
 * @dest: - copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int lt;
	int x = 0;

	while (*(src + lt) != '\0')
	{
		lt++;
	}
	for (lt = 0; x < lt; x++)
	{
		dest[x] = src[x];
	}
	dest[lt] = '\0';
	return (dest);
}
