#include "lists.h"

/**
 * get_nodeint_at_index -returns to certian index
 * @head: primary node in linked list
 * @index: node's index for returing
 *
 * Return: point to node else NULL on failure
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ice;

	ice = 0;

	listint_t *temp = head;

	while (temp && ice < index)
	{
		temp = temp->next;
		ice++;
	}

	return (temp ? temp : NULL);
}

