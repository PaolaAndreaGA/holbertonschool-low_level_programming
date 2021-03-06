#include "lists.h"
/**
 *add_node_end -   adds a new node at the end of a list_t list.
 *@head: double pointer first element of list
 *@str: pointer that duplicate
 *Return: address of the new element or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int k, count = 0;
	list_t *recent;
	list_t *prov;

	recent = malloc(sizeof(list_t));
	if (recent == NULL)
		return (NULL);

	for (k = 0; str[k] != '\0'; k++)
		count++;

	recent->len = k;
	recent->str = strdup(str);
	recent->next = NULL;

	if (*head == NULL)
	{
		*head = recent;
		return (recent);
	}

	prov = *head;

	while (prov->next != NULL)
		prov = prov->next;

	prov->next = recent;

	return (recent);
}
