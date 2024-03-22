#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: pointer to linked list's head
 * @index: index for deleting node
 * Return: 1 (success), -1 failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curnt;
	unsigned int E;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	curnt = *head;
	if (index == 0)
	{
		*head = curnt->next;
		if (curnt->next != NULL)
		{
			curnt->next->prev = NULL;
		}
		free(curnt);
		return (1);
	}
	for (E = 0; E < index; E++)
	{
		if (curnt->next == NULL)
		{
			return (-1);
		}
		curnt = curnt->next;
	}
	curnt->prev->next = curnt->next;
	if (curnt->next != NULL)
	{
		curnt->next->prev = curnt->prev;
	}
	free(curnt);
	return (1);
}
