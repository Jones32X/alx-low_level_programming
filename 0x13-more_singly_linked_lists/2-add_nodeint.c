#include "lists.h"

/**
 * add_nodeint - adds new nodeat start of linked list
 * @head: points to primary node
 * @n: accepts new node input
 *
 * Return: pointer to node else Null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newN;

 newN = malloc(sizeof(listint_t));
 if (!newN)
 return (NULL);

 newN->n = n;
 newN->next = *head;
 *head = newN;

 return (newN);
}
