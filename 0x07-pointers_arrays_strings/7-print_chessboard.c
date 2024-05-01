#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: 2 dimension array to be printed
 */

void print_chessboard(char (*a)[8])
{
	int u;
	int e;

	u = 0;
	e = 0;

	for (; u < 8; u++)
	{
		for (; e < 8; e++)
		{
			_putchar(a[u][e]);
		}
		_putchar('\n');
	}
}
