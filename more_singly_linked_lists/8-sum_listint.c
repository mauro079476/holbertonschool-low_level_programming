#include "lists.h"
/**
 * sum_listint - eturns the sum of all the data LIST
 * @head: head
 * Return: sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	listint_t *auxiliar;
	int i = 0;

	if (head == NULL)
		return (0);

	auxiliar = head;
	while (auxiliar->next != NULL)
	{
		i += auxiliar->n;
		auxiliar = auxiliar->next;
	}
	i += auxiliar->n;
	return (i);
}
