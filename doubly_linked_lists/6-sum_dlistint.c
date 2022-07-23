#include "lists.h"
/**
 * sum_dlistint - sum of nodes of a list
 * @head: head
 * Return: sum of all the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (sum);
}
