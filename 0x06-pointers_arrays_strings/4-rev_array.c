 #include "holberton.h"
 #include <stdio.h>

/**
 *reverse_array - reverses the content of an array of integers
 *@a: integer array
 *@n: integer size array
 * Return: array
 */


void reverse_array(int *a, int n)

{

	int x;
	int temp;

	n = n - 1;

	for (x = 0; x < n; x++)
	{
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
		n--;
	}

}
