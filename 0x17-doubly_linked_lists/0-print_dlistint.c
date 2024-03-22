#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: points to list
 * Return: the number of nodes.
 **/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *N = h;
	size_t cont = 0;

	while (N)
	{
		printf("%i\n", N->n);
		cont++;
		N = N->next;
	}

	return (cont);
}
