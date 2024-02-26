#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning
 * of the list_t list
 * @head: the real linked list origin
 * @str: string to be combined with the node
 * Return: NULL if failure address of new list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *TEMP;
	int len;

	len = 0;

	TEMP = malloc(sizeof(list_t));
	if (TEMP == NULL)
		return (NULL);
	while (str[len])
		len++;

	TEMP->len = len;
	TEMP->str = strdup(str);
	TEMP->next = *head;
	*head = TEMP;

	return (TEMP);

}
