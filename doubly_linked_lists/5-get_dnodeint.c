#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index of a list
 * @head: head
 * @index: position of node
 * Return: pointer to node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
				head = head->next;
					i++;
	}
	return (head);
}
