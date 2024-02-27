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
	unsigned int cnt = 0;

	while (head != NULL)
	{
		if (cnt == index)
			return (head);
		cnt++;
		head = head->next;
	}
	return (NULL);
}

