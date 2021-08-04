#include "lists.h"

/**
 *free_listint - prints all the elements of a listint_t list.
 *@head: pointer first element
 *Return: nothing
 */


void free_listint(listint_t *head)
{

	listint_t *prov;

	if (head == NULL)
	{
		return;
	}

	prov = head;
	head = head->next;
	free(prov);
}
