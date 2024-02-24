#include "main.h"
#include "stdlib.h"

/**
 * *array_range - creates an array of integers
 * @min: range of sored values at minimum
 * @max: range of max stored values
 * Return: pointer to the newest array
 */

int *array_range(int min, int max)
{
	int *pointer, j = 0, SiZe;

	if (min > max)
		return (NULL);

	SiZe = max - min + 1;

	pointer = malloc(sizeof(int) * SiZe);

	if (pointer == NULL)
		return (NULL);

	for (; min <= max; j++)
		pointer[j] = min++;

	return (pointer);

}
