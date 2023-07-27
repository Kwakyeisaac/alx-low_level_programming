#include <stdlib.h>
#include "lists.h"
/**
 * free_list - It frees a linked list
 * @head: The list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp_f;

	while (head)
	{
		temp_f = head->next;
		free(head->str);
		free(head);
		head = temp_f;
	}
}
