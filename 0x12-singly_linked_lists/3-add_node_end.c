#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * add_node_end - inserts a new node at the end of list
 * @head: linked lists head
 * @str: string to be saved in list
 * Return: head address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *NEW_ND;
	list_t *CURRENT_ND;
	size_t ab = 0;

	NEW_ND = malloc(sizeof(list_t));
	if (NEW_ND == NULL)
		return (NULL);

	NEW_ND->str = strdup(str);

	for (; str[ab]; ab++)
		;

	NEW_ND->len = ab;
	NEW_ND->next = NULL;
	CURRENT_ND = *head;

	if (CURRENT_ND == NULL)
	{
		*head = NEW_ND;
	}
	else
	{
		while (CURRENT_ND->next != NULL)
			CURRENT_ND = CURRENT_ND->next;
		CURRENT_ND->next = NEW_ND;
	}
	return (*head);
}
