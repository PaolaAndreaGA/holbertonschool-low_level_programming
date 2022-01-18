#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"


/**
 * print_array - prints an array of integers
 * @array: array to print
 * @size: size of array
 *
 * return: void
 */
void print_array(int *array, size_t size)
{
	size_t count;

	printf("Searching in array:");
	for (count = 0; count < size; count++)
	{
		printf(" %d", array[count]);
		if (count != size - 1)
			printf(",");
	}
	printf("\n");
}


/**
 *binary_search - searches for a value in a sorted array of integers
 *using the Binary search algorithm
 *@array: pointer to the first
 *element of the array to search
 *@size: is the number of elements
 *@value: is the value to search for your function must return
 *the index
 *Return: -1 or 0
 **/


int binary_search(int *array, size_t size, int value)
{
	size_t init, p, val;

	if (array != NULL && size > 0)
	{
		init = 0;
		val = size - 1;
		print_array(array + init, val + 1 - init);
		while (init < val)
		{
			p = (init + val) / 2;
			if (array[p] < value)
				init = p + 1;
			else if (array[p] > value)
				val = p;
			else
				return (p);
			print_array(array + init, val + 1 - init);
		}
	}
	return (-1);
}
