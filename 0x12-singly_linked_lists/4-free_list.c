#include "lists.h"
/**
 *free_list -  prints all the elements of a list_t list.
 *@head:  pointer element of list
 *Return: address of the new element or NULL if it failed.
 */


void free_list(list_t *head)
{
	list_t *checkup;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		checkup = (*head).next;
		free((*head).str);
		free(head);
		head = checkup;
	}
}
