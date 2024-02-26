#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as
 * a parameter on each element of array.
 * @array: the array
 * @size: amount of elements for printing
 * @action: pointer format to be printed
 * Return: nothing / void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int jk = 0;

	if (array == NULL || action == NULL)
		return;

	for (; jk < size; jk++)
	{
		action(array[jk]);
	}
}
