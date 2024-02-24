#include "main.h"

/**
 * sqrt2 - evaluates 1 to n
 * @a: identical num to n
 * @b: iretates 1 to n
 * Return: 1 Success
 */

int sqrt2(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt2(a, b + 1));

}

/**
 * _sqrt_recursion - returns square root of n
 * @n: integer
 * Return: 1 on success
 */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
