#include "lists.h"

/**
 *pop_listint -  deletes the head node of a list, and returns the head node’s data (n)
 *@h: pointer nodes type
 *Return: the number of nodes
 */

int pop_listint(listint_t **head)
{
	listint_t *prov;
	int n;

	prov = *head;
	if (prov == NULL)
		return (0);
	
	*head = prov->next;
	n = prov->n;
	free(prov);
	return (n);
}
