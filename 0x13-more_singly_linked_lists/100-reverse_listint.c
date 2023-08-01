#include "lists.h"
/**
 * reverse_listint - It reverses a listint_t linked list.
 * @head: A pointer to the first node in singly linked list
 * Return: a pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *former = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = former;
		former = *head;
		*head = next;
	}
	*head = former;
	return (*head);
}
