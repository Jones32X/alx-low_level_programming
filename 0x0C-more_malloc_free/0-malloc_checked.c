#include "stdlib.h"
#include "main.h"

/**
 * *malloc_checked - function allocatess memory using malloc
 * @b: amount of bytes to be allocated
 * Return: tothe alocated memory a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);

	return (pointer);
}
