#include "lists.h"
/**
 * free_dlistint  - frees a list
 * @head: head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freemem;

	while (head)
	{
		freemem = head->next;
		free(head);
		head = freemem;
	}
}
