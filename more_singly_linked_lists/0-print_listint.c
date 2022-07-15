#include "lists.h"
/**
 * print_listint - print all the elements of a list
 * @h: head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
			counter++;
			h = h->next;
	}
	return (counter);
}
