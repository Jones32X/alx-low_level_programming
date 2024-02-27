#include "lists.h"

/**
 * reverse_listint - puts a linked list in reverse
 * @head: points to list's primary node
 * Return: points to new list's primary node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
