#include "lists.h"
/**
 * list_len -   number of elements in a linked list
 * @h: head
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	 unsigned int i;

	for (i = 0; h; i++)
		h = h->next;

	return (i);
}
