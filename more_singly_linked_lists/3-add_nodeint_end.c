#include "lists.h"
/**
 * add_nodeint_end -  adds a new node at the end of a list
 * @n: int
 * @head: first node
 * Return: ddress of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *last = *head;

	newnode = malloc(sizeof(listint_t));

	if (newnode)
	{
		if (*head == NULL)
			*head = newnode;
		else
		{
				while (last->next != NULL)
					last = last->next;
			last->next = newnode;
		}
		newnode->n = n;
		newnode->next = NULL;
	}
	else
		free(newnode);
	return (newnode);
}
