#include "lists.h"

/**
 * insert_nodeint_at_index - places new node in list
 * @head: points toprimary node
 * @idx: index for new node addition
 * @n: inserted data into new node
 *
 * Return: points to new node, else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int ice;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (ice = 0; temp && ice < idx; ice++)
	{
		if (ice == idx - 1)
	{
		new->next = temp->next;
		temp->next = new;
		return (new);
	}
		else
			temp = temp->next;
	}
	return (NULL);
}

