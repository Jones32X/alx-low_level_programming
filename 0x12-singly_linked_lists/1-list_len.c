#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - function that returns the number of
 * elements in a linked list_t lst.
 * @h: the linked list
 * Return: amount of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t cnt;

	cnt = 0;

	while (h)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
