#include "main.h"
#include <stdlib.h>

/**
 * count_word - counts num of words in a string
 * @s: string to be tested
 * Return: amount of words
 */

int count_word(char *s)
{
	int flag = 0;
	int v = 0;
	int b;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			v++;

		}

	}
	return (v);
}

/**
 * strtow  - spilts strings
 * @str: string for spliting
 * Return: pointer to string array
 * or NULL for erorr
 */

char **strtow(char *str)
{
	char **matrix;
	char *temporary;
	int j, L = 0, length = 0;
	int words, d = 0;
	int start, end;


	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (j = 0;  j <= length; j++)
	{
		if (str[j]  == ' ' ||  str[j] == '\0')
		{
			if (d)
			{
				end = j;
				temporary = (char *) malloc(sizeof(char) * (d + 1));
				if (temporary == NULL)
					return (NULL);
				while (start < end)
					*temporary++ = str[start++];
				*temporary = '\0';
				matrix[L] = temporary - d;
				L++;
				d = 0;
			}
		}
		else if (d++ == 0)
		start = j;
	}
	matrix[L] = NULL;
	return	(matrix);
}
