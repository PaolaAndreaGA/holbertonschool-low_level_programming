#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a listint_t list.
 *@head:  pointer to pointer of first element
 *@n: elements add
 *Return: the address of the new element, or NULL if it failed
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *prov, *last;

	prov = malloc(sizeof(listint_t));

	if (prov == NULL)
		return (NULL);


	prov->n = n;
	prov->next = NULL;


	if (*head == NULL)
	{
		*head = prov;
	}

	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;

		}

		last->next = prov;
	}
	return (prov);
}
