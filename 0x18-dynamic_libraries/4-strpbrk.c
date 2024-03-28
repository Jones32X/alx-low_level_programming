#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s: the string to be searched.
 * @accept: set of bytes to be seacrhed for.
 * Return: If a set is matched - a pointer to a macthed byte.
 * If not set is macted - NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int indeX;

	while (*s)
	{
		for (indeX = 0; accept[indeX]; indeX++)
		{
			if (*s == accept[indeX])
				return (s);
		}
		s++;
	}
	return ('\0');
}
