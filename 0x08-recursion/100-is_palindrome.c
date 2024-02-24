#include "main.h"

/**
 * palind2 -  obtains string length
 * @a: string
 * @l: int for string counting
 * Return: 1 Success, -1 on error
 */

int palind2(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (palind2(a + 1, l + 1));
}

/**
 * palind3 -  string vs reverse comparison
 * @a: string for caomparison
 * @l: length for caompariosn
 * Return: 1 on success, -1 fail/error
 */

int palind3(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (palind3(a + 1, l - 2));
}



/**
 * is_palindrome - evaluates if string is palidrome
 * @s: string for checking
 * Return: 1 Success
 */

int is_palindrome(char *s)
{
	int l;

	l = palind2(s, 0);
	return (palind3(s, l));
}
