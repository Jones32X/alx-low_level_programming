#include "lists.h"

/**
 * free_listint_safe - releases linked list
 * @h: points to primary node of linked list
 *
 * Return: elements amount in list freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int difference;

	listint_t *temp;

	if (!h || !*h)
	{
		return (0);
	}

	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		len++;
	}
		else
	{
		free(*h);
		*h = NULL;
		len++;
		break;
	}
	}

	*h = NULL;
	return (len);
}
