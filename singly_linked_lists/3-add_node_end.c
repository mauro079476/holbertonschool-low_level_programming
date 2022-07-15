#include "lists.h"
/**
 * *add_node_end - adds a new node at the end of a list
 * @head: head
 * @str: string
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *i = *head;

	newnode = malloc(sizeof(list_t));

	if (newnode)
	{
		if (*head == NULL)
			*head = newnode;
		else
		{
			while (i->next != NULL)
			i = i->next;
		i->next = newnode;
		}

		newnode->str = strdup(str);
		newnode->len = strlen(str);
		newnode->next = NULL;
	}
	else
		free(newnode);

	return (newnode);
}
