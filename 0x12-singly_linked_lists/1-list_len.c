
#include "lists.h"
/**
 *list_len -  prints all the elements of a list_t list.
 *@h: pointer nodes type
 *Return:  the number of nodes
 */

size_t list_len(const list_t *h)
{

	int cnt;


	for (cnt = 0; h != NULL; cnt++)
	{

		h = (*h).next;
	}

	return (cnt);
}
