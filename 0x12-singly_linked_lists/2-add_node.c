#include "lists.h"
/**
 *add_node -  prints all the elements of a list_t list.
 *@head: double pointer first element of list
 *@str: pointer that duplicate
 *Return: address of the new element or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{


	list_t *prov;

	prov = malloc(sizeof(list_t));

	if (prov == NULL)
	{
		return (NULL);
	}


	return (*head);
}
