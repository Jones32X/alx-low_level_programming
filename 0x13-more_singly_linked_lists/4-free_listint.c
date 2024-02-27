#include "lists.h"

/**
 * free_listint - releases linked list
 * @head: listint_t list for freeing/realeasing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
