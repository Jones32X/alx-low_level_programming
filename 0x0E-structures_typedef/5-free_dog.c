#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees mermory
 * that is allocated to the struct dogs
 * @d: dog struct to be free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
