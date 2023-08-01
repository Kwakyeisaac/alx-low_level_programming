#include "lists.h"
/**
 * sum_listint - it returns the sum of all the data
 * (n) of a listint_t linked list
 * @head: the first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *curr = head;

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
