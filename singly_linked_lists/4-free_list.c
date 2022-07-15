#include "lists.h"
/**
 * free_list - frees a list
 * @head: head
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *freemem;

	while ((freemem = head))
	{
		if (freemem->str)
			free(freemem->str);
		head = head->next;
		free(freemem);
	}
}
