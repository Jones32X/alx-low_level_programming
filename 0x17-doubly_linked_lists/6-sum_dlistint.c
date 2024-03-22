#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list.
 * @head: points to list.
 * Return: total ofall list data, otherwise 0.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *nodeN = head;
	int TOT = 0;

	while (nodeN)
	{
		TOT = TOT + nodeN->n;
		nodeN = nodeN->next;
	}

	return (TOT);
}
