#include "search_algos.h"

/**
 *linear_search - function that searches for a value in an array of integers
 *@array:  pointer to the first element of the array to search
 *in size is the number of elements in array
 *@size: is the number of elements in array
 *@value: is the value to search for
 *Your function must return the first i where value is located
 *Return: is not present in array or if array is NULL or -1
 **/



int linear_search(int *array, size_t size, int value)
{

	unsigned int i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
