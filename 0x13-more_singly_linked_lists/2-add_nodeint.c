#include "lists.h"
/**
 * add_nodeint - It adds a new node to the
 * beginning of a new singly linked list.
 * @head: A pointer to the address of the
 * head of the singly linked list.
 * @n: An integer for the new node
 *
 * Return: If the function fails - (NULL)
 * otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
