#include "lists.h"

/**
 * listint_len - returns number of elements
 * in linked list
 * @h:listint_t to traverse
 *
 * Return: Amount of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t number;

	number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}

