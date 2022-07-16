#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: head
 * @index: index
 * Return: nth node of a list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *search;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	search = head;

	for (i = 0; i < index && search != NULL; i++)
	{
	search = search->next;
	}
	if (search == NULL)
		return (NULL);
	return (search);
}
