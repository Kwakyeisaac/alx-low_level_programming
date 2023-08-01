#include "lists.h"
/**
 * pop_listint - it deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: A pointer to the head node of the linked list
 * Return: the data inside the head node
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *curr;
	int data;

	if (!head || !*head)
		return (0);
	data = (*head)->n;
	curr = (*head)->next;
	free(*head);
	*head = curr;
	return (data);
}
