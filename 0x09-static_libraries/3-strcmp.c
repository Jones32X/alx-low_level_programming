#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 * Return: s[1] - s[2]
 */

int _strcmp(char *s1, char *s2)
{
	int R;

	R = 0;
	while (s1[R] != '\0' && s2[R] != '\0')
	{
		if (s1[R] != s2[R])
		{
			return (s1[R] - s2[R]);
		}
	R++;

	}
	return (0);
}
