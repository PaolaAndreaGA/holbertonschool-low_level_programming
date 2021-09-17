#include "lists.h"
/**
 * print_dlistint - prints  elements of a list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *aux;

	aux = h;

	while (aux != NULL)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
		counter++;
	}
	return (counter);
}
