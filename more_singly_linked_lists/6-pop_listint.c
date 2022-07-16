#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: head
 * Return: head node’s data
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *aux;

	if (head == NULL || *head == NULL)
		return (0);

	i = (*head)->n;
	aux = *head;
	*head = (*head)->next;
	free(aux);
	return (i);
}
