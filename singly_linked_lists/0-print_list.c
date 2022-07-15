#include "lists.h"
/**
 * print_list -  prints all the elements of a list_t
 * @h: head
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int counter = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
				counter++;
				h = h->next;
	}
	return (counter);
}
