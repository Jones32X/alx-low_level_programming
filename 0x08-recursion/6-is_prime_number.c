#include "main.h"

/**
 * prime2 - evaluates from 1 - n
 * @a: identical num to 1
 * @b: ireates 1 to n
 * Return: 1 on success
 */
int prime2(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	return (prime2(a, b + 1));
}


/**
 * is_prime_number -  returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: integer number
 * Return: -1 for erro
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
