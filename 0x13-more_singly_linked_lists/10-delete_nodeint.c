#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index.
 * @head: pointer of first elemnt of list.
 * @index: index of node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *nextnode, *prov;

	prov = *head;
	count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = prov->next;
		free(prov);
		return (1);
	}

	while (prov != NULL && count < index - 1)
	{
		prov = prov->next;
		count++;
		if (prov == NULL || prov->next == NULL)
			return (-1);
	}

	nextnode = prov->next->next;
	free(prov->next);
	prov->next = nextnode;

	return (1);
}
