#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Function frees a dlistint_t list
 * @head: Linked list's head
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *NeXt;

	while (NeXt != NULL)
	{
		NeXt = head->next;
		free(head);
		head = NeXt;
	}
}
