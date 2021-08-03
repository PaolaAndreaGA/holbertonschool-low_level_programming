#include "lists.h"

/**
 *add_nodeint - prints all the elements of a listint_t list.
 *@head: double pointer
 *@n: head linked list
 *Return: the address of the new element, or NULL if it failed
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *prov;

	prov = malloc(sizeof(listint_t));

	if (prov == NULL)
	{
		return (NULL);
	}

	prov->next = *head;
	prov->n = n;
	*head = prov;

	return (*head);
}
