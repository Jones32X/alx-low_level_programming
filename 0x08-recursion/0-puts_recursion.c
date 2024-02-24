#include "main.h"

/**
 * main - prints a string, follwed by
 * a new line.
 * Return: 0 all thre time
 */

int main(void)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
