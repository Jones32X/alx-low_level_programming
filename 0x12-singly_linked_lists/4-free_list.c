#include "lists.h"
#include <stdlib.h>


/**
 * free_list - function that frees a list_t list.
 * @head: linked list's headder
 * Return: nothing, theres no need
*/

void free_list(list_t *head)
{
	list_t *curr_NODE;

	while ((curr_NODE = head) != NULL)
	{
		head = head->next;
		free(curr_NODE->str);
		free(curr_NODE);
	}
}
