#include "lists.h"

/**
 * dlistint_len - count the number of nodes in the linked list
 * @h: points to linked list begining
 * Return: node number
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t X;

	for (X = 0; h != NULL; X++)
		h = h->next;
	return (X);
}
