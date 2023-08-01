#include "lists.h"
/**
 * add_nodeint_end - to add a new node at the end of a listint_t list
 * @head: A pointer to the address of the head to listint_t list
 * @n: An integer to the new node
 * Return: if the function fail - (NULL)
 * Otherwise - the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (*head);
}
