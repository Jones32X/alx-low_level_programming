#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: the array
 * @size: array elements size
 * @cmp: pointer to the function
 * Return: 0 (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int L = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (; L < size; L++)
	{
		if (cmp(array[L]))
			return(L);
	}
	return (-1);
}
