#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer point to linked list begining
 * @idx: new node index insert point
 * @n: data for node input
 * Return: points to new node,  NULL for failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *next, *current;
	unsigned int K;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *h;
		for (K = 0; K < idx - 1 && current != NULL; K++)
			current = current->next;
		if (current == NULL)
		{
			return (NULL);
		}
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = current;
		next = current->next;
		current->next = new;
	}
	new->next = next;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
