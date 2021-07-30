#include "lists.h"
/**
 *print_list -  prints all the elements of a list_t list.
 *@h: pointer nodes type
 *Return:  the number of nodes
 */

size_t print_list(const list_t *h)
{
	int cnt;


	for (cnt = 0; h != NULL; cnt++)
	{

		if ((*h).str == NULL)
		{
			printf("[0] (nil)\n");
			h = (*h).next;
			cnt++;
		}

		printf("[%d] %s\n", (*h).len, (*h).str);
		h = (*h).next;
	}
	return (cnt);
}
