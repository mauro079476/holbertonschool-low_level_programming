#include "lists.h"
/**
 * add_nodeint_end -  adds a new node at the end of a list
 * @n: int
 * Return: ddress of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *auxiliar = *head;

	newnode = malloc(sizeof(listint_t));
	if (auxiliar == NULL)
		return (NULL);

	auxiliar->n = n;

	if (*head == NULL)
	{
		*head = auxiliar;
		auxiliar->next = NULL;
	}

	newnode = *head;

	while (newnode->next != NULL)
	{
		newnode = newnode->next;
	}
	newnode->next = auxiliar;
	auxiliar->next = NULL;
	return (auxiliar);
}
