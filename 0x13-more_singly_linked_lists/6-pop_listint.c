#include "lists.h"

/**
 * pop_listint - deletes linst head node
 * @head: points to primary elemnet of list
 *
 * Return: return deleted data or 0 if empty
 */
int pop_listint(listint_t **head)
{
	int numbers;

	listint_t *temp;

	if (!head || !*head)
		return (0);

	numbers = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (numbers);
}
