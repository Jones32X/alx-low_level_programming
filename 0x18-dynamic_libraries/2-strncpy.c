#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int jk;

	jk = 0;
	while (jk < n && src[jk] != '\0')
	{
		dest[jk] = src[jk];
		jk++;
	}
	while (jk < n)
	{
		dest[jk] = '\0';
		jk++;
	}
	return (dest);
}
