#include "lists.h"

/**
 * delete_nodeint_at_index - deletes nodes in linked list
 * @head: points to primary list element
 * @index: index to be deletd in node
 *
 * Return: 1 on Success), then -1 on Fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int iCE;

	iCE = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (iCE < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		iCE++;
 }
	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
