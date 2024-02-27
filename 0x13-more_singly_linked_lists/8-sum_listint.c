#include "lists.h"

/**
 * sum_listint - calculates sum of listint_t list data
 * @head: linked list's primary node
 *
 * Return: result of the sum
 */
int sum_listint(listint_t *head)
{
	int SUM = 0;
	listint_t *temp = head;

	while (temp)
	{
		SUM += temp->n;
		temp = temp->next;
	}
	return (SUM);
}
