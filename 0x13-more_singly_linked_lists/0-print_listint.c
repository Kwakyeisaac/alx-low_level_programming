#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: a pointer to the head of the stingly links
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
