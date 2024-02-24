#include "stdlib.h"
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: points to memory allocated by malloc
 * @old_size: size of memory ptr
 * @new_size: memory block's new size
 * Return: pointer to new block of memory
 * that has been allocated
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer1;
	char *old_pointer;
	unsigned int j = 0;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
	free(ptr);
	return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	pointer1 = malloc(new_size);
	if (!ptr)
		return (NULL);

	old_pointer = ptr;

	if (new_size < old_size)
	{
		for (; j < new_size; j++)
			pointer1[j] = old_pointer[j];
	}

	if (new_size > old_size)
	{
		for (; j < old_size; j++)
			pointer1[j] = old_pointer[j];
	}
	free(ptr);
	return (pointer1);

}
