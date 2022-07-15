#include "lists.h"
/**
 * free_listint - frees a list
 * @head: head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *freemem;

	while (head)
	{
		freemem = head->next;
		free(head);
		head = freemem;
	}
}
