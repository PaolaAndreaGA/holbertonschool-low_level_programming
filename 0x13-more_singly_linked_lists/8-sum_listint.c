#include "lists.h"

/**
 *sum_listint - prints all the elements of a listint_t list.
 *@head: pointer nodes type
 *Return: the number of nodes
 */

int sum_listint(listint_t *head)
{
	int add;

	add = 0;
	
	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
	
