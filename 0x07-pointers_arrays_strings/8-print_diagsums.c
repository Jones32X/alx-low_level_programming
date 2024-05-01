#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of the 2 diagonals
 * of a square matrix of integers
 * @a: square matrix that prints the sum of diagonals
 * @size: matrix size
 */

void print_diagsums(int *a, int size)
{
	int o;

	unsigned int SUM, SUM1;

	SUM = 0;
	SUM1 = 0;
	o = 0;

	for (; o < size; o++)
	{
		SUM += a[(size * o) + o];
		SUM1 += a[(size * (o + 1)) - (o + 1)];
	}

	printf("%d, %d\n", SUM, SUM1);
}
