#include "lists.h"
/**
 * delete_dnodeint_at_index - function to delete node at index
 * @head: double pointer of dlistint_t type to head of linked list
 * @index: index at which node will be deleted
 * Return: 1  or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux1, *aux = *head;
	unsigned int counter = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = aux->next;
		if (aux->next != NULL)
			aux->next->prev = NULL;
		free(aux);
		return (1);
	}

	while (counter < (index - 1))
	{
		if (aux == NULL)
			return (-1);
		aux = aux->next;
		counter++;
	}
	aux1 = aux->next->next;
	if (aux->next->next != NULL)
		aux->next->next->prev = aux;
	free(aux->next);
	aux->next = aux1;
	return (1);
}
