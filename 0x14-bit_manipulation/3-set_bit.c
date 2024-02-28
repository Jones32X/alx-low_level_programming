#include "main.h"

/**
 * set_bit - prog sets the value of a bit to 1 at a given index.
 * @n: set num
 * @index: index for setting of bit
 * Return: 1 if success, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setBITs;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	setBITs = 1 << index;
	*n = *n | setBITs;
	return (1);
}
