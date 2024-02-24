#include "main.h"

/**
 * _strlen_recursion - returns string length
 * @s: string
 * Return: 1 for success and -1 for error
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}
