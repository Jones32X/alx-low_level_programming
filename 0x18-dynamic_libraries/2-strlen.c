#include "main.h"

/**
 * _strlen - returns the legnth of a string
 * @S: string
 * Return: string length
 */
int _strlen(char *S)
{
	int longer = 0;

	while (*S != '\0')
	{
		longer++;
		S++;
	}
	return (longer);
}
