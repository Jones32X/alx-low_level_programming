#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: points to list's first element
 * @n: int goes to new node.
 * Return: element Address, NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *AUX = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (AUX)
	{
		while (AUX->next)
			AUX = AUX->next;
		newNode->prev = AUX;
		AUX->next = newNode;
	}
	else
	{
		*head = newNode;
		newNode->prev = NULL;
	}

	return (newNode);
}
