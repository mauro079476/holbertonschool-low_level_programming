#include "lists.h"
/**
 * listint_len -  number of elements in a linked list
 * @h: head
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
		h = h->next;

	return (i);
}
