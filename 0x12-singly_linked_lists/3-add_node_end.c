#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - It adds a new node at the end of a linked list
 * @head: It doubles pointer to the list_t list
 * @str: The string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_w;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	new_w = malloc(sizeof(list_t));
	if (!new_w)
		return (NULL);
	new_w->str = strdup(str);
	new_w->len = len;
	new_w->next = NULL;
	if (*head == NULL)
	{
		*head = new_w;
		return (new_w);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new_w;
	return (new_w);
}
