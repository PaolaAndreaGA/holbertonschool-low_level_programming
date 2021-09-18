#include "lists.h"
/**
 * add_dnodeint - adds a node at the beginning of a list
 * @head: double pointer to the head of a list
 * @n:  element to add to the new node
 * Return: new element, or NULL
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *aux = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || head == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
		new->next = NULL;
	else
	{
		new->next = aux;
		aux->prev = new;
	}
	new->prev = NULL;
	*head = new;

	return (new);
}
