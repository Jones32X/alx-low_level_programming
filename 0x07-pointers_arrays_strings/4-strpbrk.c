#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches string for any of a set of bytes
 * @s: string to locate/search
 * @accept: stringcontaining the bytes to be searched
 * Return: pointer to byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int e;
	int u;

	u = 0;
	e = 0;

	for (; *s != '\0'; e++)
	{
		for (u = 0; accept[u] != '\0'; u++)
		{
			if (*s == accept[u])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
