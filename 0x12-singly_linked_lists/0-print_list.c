#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - function that prints all elements
 * belonging to a list_t list.
 * @h: the name of the list_h
 * Return: amount of node in h
 */

size_t print_list(const list_t *h)
{
	size_t NODES;

	NODES = 0;

	while (h)
	{
		if (h->str ==  NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		NODES++;
		h = h->next;
	}
	return (NODES);
}
