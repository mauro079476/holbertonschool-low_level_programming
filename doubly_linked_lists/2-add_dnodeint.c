#include "lists.h"
/**
 * add_dnodeint -   add a new node at the beginning of a list
 * @head: head
 * @n: int
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	int number = n;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	return (0);

	newnode->n = number;
	newnode->next = *head;

	if (*head != NULL)
		(*head)->prev = newnode;

	newnode->prev = NULL;
	*head = newnode;
	return (newnode);
}
