#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * ,which contains a copy of the string given as a parameter.
 * @str: char value
 * Return: o (Success)
 */

char *_strdup(char *str)
{
	char *AAA;
	int j = 0;
	int s = 0;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
		j++;

	AAA = malloc(sizeof(char) * (j + 1));

	if (AAA == NULL)
		return (NULL);

	for (s = 0; str[s]; s++)
		AAA[s]  =  str[s];
	return (AAA);
}
