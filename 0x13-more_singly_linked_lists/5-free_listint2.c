#include "lists.h"

/**
 *free_listint2 - prints all the elements of a listint_t list.
 *@head: pointer first element
 *Return: nothing
 */


void free_listint2(listint_t **head)
{

	listint_t *prov;

	if (head == NULL)
	{
		return;
	}


	while (*head != NULL)
	{
		prov = *head;
		*head = (*head)->next;
		free(prov);
	}

	head = NULL;
}
