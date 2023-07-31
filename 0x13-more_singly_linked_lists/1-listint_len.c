#include "lists.h"
/**
 * listint_len - It returns the number of elements in a singly linked list
 *@h: A pointer to the head of the singly linked list
 *
 * Return: The number of elements in the singly linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
