#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums -  prints the sum of the two diagonals of a square matrix
 *@a: pointer
 *@size: size
 *Return: void.
 */
void print_diagsums(int *a, int size)
{
	int x, tamano;
	unsigned int Diag1, Diag2;

	tamano = 0;
	Diag1 = 0;
	Diag2 = 0;

	tamano = (size * size) - 1;

	for (x = 0; x <= tamano; x = x + (size + 1))
	{
		Diag1 = Diag1 + a[x];
	}
	for (x = (size - 1); x < tamano; x = x + (size - 1))
	{
		Diag2 = Diag2 + a[x];
	}
	printf("%d, %d\n", Diag1, Diag2);
}
