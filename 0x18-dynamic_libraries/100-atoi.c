#include "main.h"

/**
 * _atoi - convert string to an integer
 * @s: string to use in the program
 * Return: int
 */
int _atoi(char *s)
{
	int sigma = 1;
	int k = 0;
	unsigned int unsign = 0;

	while (!(s[k] <= '9' && s[k] >= '0') && s[k] != '\0')
	{
		if (s[k] == '-')
			sigma *= -1;
		k++;
	}
	while (s[k] <= '9' && (s[k] >= '0' && s[k] != '\0'))
	{
		unsign = (unsign * 10) + (s[k] - '0');
		k++;
	}
	unsign *= sigma;
	return (unsign);
}
