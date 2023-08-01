#include "lists.h"
/**
 * delete_nodeint_at_index - It deletes the node at index
 * index of a listint_t linked list
 * @index: index of the node that should be deleted
 * @head: A pointer to the first element
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head;
	listint_t *current = NULL;

	unsigned int k = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}
	while (k < index - 1)
	{
		if (!curr || !(curr->next))
			return (-1);
		curr = curr->next;
		k++;
	}
	current = curr->next;
	curr->next = current->next;
	free(current);
	return (1);
}
