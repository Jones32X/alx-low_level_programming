#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int.
 * @b: points to string holding binary number
 * Return: unsigned integer containing decimal val of
 * binary number
 * else 0, error
 */

unsigned int binary_to_uint(const char *b)
{
	int at;
	unsigned int num = 0;

	if (!b)
	{
		return (0);
	}
	for (at = 0; b[at] != '\0'; at++)
	{
		if (b[at] != '0' && b[at] != '1')
			return (0);
	}
	for (at = 0; b[at] != '\0'; at++)
	{
		num <<= 1;
		if (b[at] == '1')
			num += 1;
	}
	return (num);
}
