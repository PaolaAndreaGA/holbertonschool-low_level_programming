#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to head to a list
 * Return: number of elements in a DLL
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *aux = h;

	while (aux != NULL)
	{
		counter++;
		aux = aux->next;
	}
	return (counter);
}
