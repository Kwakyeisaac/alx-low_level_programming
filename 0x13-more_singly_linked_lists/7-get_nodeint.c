#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: first node in the linked list
 * @index: the index of the node to return
 *
 * Return: the pointer to the node we are looking for or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *curr = head;

	while (curr && k < index)
	{
		curr = curr->next;
		k++;
	}
	return (curr ? curr : NULL);
}
