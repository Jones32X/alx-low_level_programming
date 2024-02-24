#include "main.h"
#include <stdlib.h>

/**
 * argstostr -  concatenates all the arguments of a program
 * @ac: input
 * @av: pointer array
 * Return: 0 (Sucess)
 */

char *argstostr(int ac, char **av)
{
	int j, m, s = 0;
	int L = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (m = 0; av[j][m]; m++)
			L++;
	}
	L += ac;

	str = malloc(sizeof(char) * L + 1);
	if (str == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
	for (m = 0; av[j][m]; m++)
	{
		str[s] = av[j][m];
		s++;
	}
	if (str[s] == '\0')
	{
		str[s++] = '\n';
	}
	}
	return (str);
}
