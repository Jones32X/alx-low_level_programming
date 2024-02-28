#include "main.h"

/**
 * get_endianness - prog checks the endianness
 *
 * Return: 0 BIG endian or 1 for little endian
 */
int get_endianness(void)
{
	int as;
	char *big;

	as = 1;
	big = (char *)&as;
	return (*big);

}

