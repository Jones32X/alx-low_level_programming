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

	unsigned int SUM, 1SUM;

	SUM = 0;
	1SUM = 0;
	o = 0;

	for (; o < size; o++)
	{
		SUM += a[(size * o) + o];
		1SUM += a[(size * (o + 1)) - (o + 1)];
	}

	printf("%d, %d\n", SUM, 1SUM);
}
