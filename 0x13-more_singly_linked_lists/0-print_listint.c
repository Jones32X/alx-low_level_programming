#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list with type listint_t for  printing
 *
 * Return: node amount
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	return (number);
}

