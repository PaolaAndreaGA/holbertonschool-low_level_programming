#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 *@*a: pointer value a
 *@*b: pointer value b
 *@a: value integer
 *@b: value integer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int prov;

	prov = *a;
	*a = *b;
	*b = prov;

}
