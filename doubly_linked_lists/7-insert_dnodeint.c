#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node
 * @h: head
 * @idx: index
 * @n: new node value
 * Return: new node adress
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux;
	unsigned int i;

	if (idx == 0 || !(*h) || !h)
		return (add_dnodeint(h, n));

	while (aux && i < (idx - 1))
	{
		aux = aux->next;
		i++;
	}
	return (0);
}	
