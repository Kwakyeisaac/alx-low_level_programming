#include <stdlib.h>
#include "lists.h"
/**
 * list_len - it returns the number of elements in a linked list
 * @h: Pointer to the list_t list
 *
 * Return: Number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t g = 0;

	while (h)
	{
		g++;
		h = h->next;
	}
	return (g);
}

