#include "main.h"

/**
 * _pow - func calculates (base ^ power)
 * @base: Exponent base
 * @power: Exponent's power
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num = 1;
	unsigned int at;

	for (at = 1; at <= power; at++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints a number in binary notation
 * @n: num for printing
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flags;

	flags = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flags = 1;
			_putchar('1');
		}
		else if (flags == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
