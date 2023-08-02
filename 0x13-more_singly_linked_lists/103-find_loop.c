#include "lists.h"
/**
 * find_listint_loop - it finds the loop in a linked list
 * @head: A pointer to the loop in a linked list
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *gradual = head;
	listint_t *quick = head;

	if (!head)
		return (NULL);
	while (gradual && quick && quick->next)
	{
		quick = quick->next->next;
		gradual = gradual->next;
		if (quick == gradual)
		{
			gradual = head;
			while (gradual != quick)
			{
				gradual = gradual->next;
				quick = quick->next;
			}
			return (quick);
		}
	}
	return (NULL);
}
