#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer of the first element on list.
 * @idx: index of list where the new node should be added.
 * @n: integer to be inserted.
 *
 * Return: address of the new node or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prov;
	unsigned int count;

	prov = *head;

	count = 0;
	while (prov && count < idx - 1)
	{
		prov = prov->next;
		count++;
	}

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		if (count + 1 == idx)
		{
			new->next = prov->next;
			prov->next = new;
			return (new);
		}
	}
	free(new);
	return (NULL);
}
