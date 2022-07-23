#include "lists.h"
/**
 * add_dnodeint_end -  adds a new node at the end of a list
 * @n: int
 * @head: first node
 * Return: ddress of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *dat = NULL, *temp;

	dat = malloc(sizeof(dlistint_t));
	if (dat == NULL)
		return (0);

	temp = *head;
	dat->n = n;
	dat->next = NULL;

	if (*head == NULL)
	{
		dat->prev = NULL;
		*head = dat;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = dat;
		dat->prev = temp;
	}
	return (dat);
}
