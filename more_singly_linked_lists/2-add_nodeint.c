#include "lists.h"
/**
 * add_nodeint -   add a new node at the beginning of a list
 * @head: head
 * @n: int
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;
	int number = n;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (0);

	newnode->n = number;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
