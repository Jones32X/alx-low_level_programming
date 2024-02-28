#include"main.h"

/**
 * get_bit - returns the value of a bit at a given index..
 * @n: numb to be evaulted in bits
 * @index: index for checking bit
 * Return: bit value, else -1 on erro
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int chck, divi;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	divi = 1 << index;
	chck = n & divi;
	if (chck == divi)
		return (1);
	return (0);
}
