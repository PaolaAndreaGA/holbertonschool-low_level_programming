#include "lists.h"

/**
 *listint_len - function returns the number of elements in a linked list.
 *@h: pointer nodes type
 *Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
