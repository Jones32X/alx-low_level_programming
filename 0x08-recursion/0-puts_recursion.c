#include "main.h"

/**
 * main - prints a string, follwed by
 * a new line.
 * Return: 0 all thre time
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
