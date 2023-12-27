#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase
 * followed by a new line
 * Return: 0 success
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if ((c != 'q' && c != 'e') && c <= 'z')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
