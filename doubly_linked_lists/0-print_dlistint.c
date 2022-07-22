#include "lists.h"
/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 * @h: head of the list
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int counter;

	for (counter = 0; h != NULL; counter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
