#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: 1st num
 * @m: 2nd num
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int at, cntbit;
	unsigned long int reccent;
	unsigned long int exclusiV = n ^ m;

	cntbit = 0;

	for (at = 63; at >= 0; at--)
	{
		reccent = exclusiV >> at;
		if (reccent & 1)
		{
			cntbit++;
		}
	}

	return (cntbit);
}
