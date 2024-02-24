#include "main.h"
#include <stdlib.h>

/**
 * str_concat -obtain input and calculate size
 * @s1: First concat input
 * @s2: Second Concat input
 * Return: concat 1 and cont 2
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenate;
	int j;
	int cj;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = cj = 0;
	while (s1[j] !=  '\0')
		j++;
	while (s2[cj] != '\0')
		cj++;

	concatenate = malloc(sizeof(char) * (j + cj + 1));

	if (concatenate == NULL)
		return (NULL);

	j = cj = 0;
	while (s1[j] != '\0')
	{
		concatenate[j] = s1[j];
		j++;
	}

	while (s2[cj] != '\0')
	{
		concatenate[j] = s2[cj];
		j++, cj++;
	}
	concatenate[j] = '\0';
	return (concatenate);

}
