#include "lists.h"
/**
 * free_listint_safe - free lists with a loop
 * @h: A pointer to the first node in the singly linked list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int ike;
	listint_t *curr;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		ike = *h - (*h)->next;
		if (ike > 0)
		{
			curr = (*h)->next;
			free(*h);
			*h = curr;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
