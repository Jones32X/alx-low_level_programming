#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse,
 * followed by a new line
 * @s: string
 * Return: 1 for success, -1 on error
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
