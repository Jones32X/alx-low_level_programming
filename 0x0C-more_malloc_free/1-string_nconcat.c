#include "stdlib.h"
#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: string to add to
 * @s2: string to concatenate
 * @n: number of bytes from s2 to cobine to s2
 * Return: pointer to resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *z;
	unsigned int j = 0, k = 0;
	unsigned int length1 = 0, length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;

	if (n < length2)
		z = malloc(sizeof(char) * (length1 + n + 1));
	else
		z = malloc(sizeof(char) * (length1 + length2 + 1));

	if (!z)
		return (NULL);
	while (j < length1)
	{
		z[j] = s1[j];
		j++;
	}

	while (n < length2 && j < (length1 + n))
		z[j++] = s2[k++];

	while (n >= length2 && j < (length1 + length2))
		z[j++] = s2[k++];

	z[j] = '\0';
	return (z);
}
