#include "lists.h"

/**
 * add_nodeint_end - places node at end of linked list
 * @head: points to first list element
 * @n: data insert
 * Return: point to new node else Null on fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newN;
	listint_t *temp = *head;

	newN = malloc(sizeof(listint_t));
	if (!newN)
	{
		return (NULL);
	}

	newN->n = n;
	newN->next = NULL;

	if (head == NULL)
	{
		*head = newN;
		return (newN);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = newN;
	return (newN);
}
