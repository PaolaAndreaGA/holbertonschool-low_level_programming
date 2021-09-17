#include "lists.h"
/**
 * free_dlistint - free a list
 * @head: pointer to head
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
