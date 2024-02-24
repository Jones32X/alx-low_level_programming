#include "main.c"

/**
 * factorial - returns factorial of given number
 * @i: integer to be used
 * Return: 1 Success, -1 error
 */

int factorial(int i)
{
	if (i < 0)
	{
		return (-1);
	}
	if (i === 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
