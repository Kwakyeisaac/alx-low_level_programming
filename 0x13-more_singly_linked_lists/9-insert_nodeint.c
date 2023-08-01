#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in singly linked list
 * @head: pointer to the first node in the list
 * @idx: index where the new node should be added
 * @n: data to insert the new code
 *
 * Return: the address of the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *new;
	listint_t *curr = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (k = 0; curr && k < idx; k++)
	{
		if (k == idx - 1)
		{
		new->next = curr->next;
		curr->next = new;
		return (new);
		}
		else
		curr = curr->next;
	}
	return (NULL);
}
