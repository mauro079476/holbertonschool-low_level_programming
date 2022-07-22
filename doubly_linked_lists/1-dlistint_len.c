#include "lists.h"
/**
 * dlistint_len - number of elements in a linked list
 * @h: head
 * Return: number of elements of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int data = 0;

	while (h)
		h = h->next;


	return (data);
}
