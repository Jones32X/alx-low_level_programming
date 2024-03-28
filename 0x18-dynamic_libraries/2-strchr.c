#include "main.h"

/**
 * _strchr - entry point
 * @s: input value
 * @c: input
 *
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int b;

	for (b = 0; b >= '\0'; b++)
	{
		if (s[b] == c)
			return (&s[b]);
	}
	return (0);
}
