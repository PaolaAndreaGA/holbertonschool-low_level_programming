#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of a DLL
 * @idx: the position where the new node should be entered
 * @n: the data to put into the new node
 * Return: new node, or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *aux = *h;
	unsigned int counter = 0;
	size_t len = dlistint_len(*h);

	if (idx > len)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (len == idx)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	while (counter < idx - 1)
	{
		aux = aux->next;
		counter++;
	}

	new->n = n;
	new->next = aux->next;
	new->prev = aux;
	aux->next->prev = new;
	aux->next = new;
	return (new);
}
