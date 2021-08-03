#include "lists.h"

/**
 *print_listint - prints all the elements of a listint_t list.
 *@h: pointer nodes type
 *
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
