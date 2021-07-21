#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 *array_iterator - executes function given as a parameter element of an array.
 *@array: string
 *@size: string size
 *@action: function pointer
 *Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
