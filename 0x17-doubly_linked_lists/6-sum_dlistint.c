#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * @head: head of the linked list
 * Return: if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;
	int add = 0;

	if (head == NULL)
		return (0);

	while (aux)
	{
		add += aux->n;
		aux = aux->next;
	}
	return (add);
}
