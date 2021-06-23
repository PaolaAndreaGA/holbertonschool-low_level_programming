#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: natural number
 * Return: Void
 */
void print_to_98(int n)
{
	int x;

	if (n == 98)
	{
	printf("98\n");
	}

else if (n < 98)
{
	for (x = 0; x < 98; x++)
	{
		printf("%d, ", x);
		printf("98\n");
	}
}	else
	{
		for (x = 0; x > 98; x--)
		{
			printf("%d, ", x);
			printf("98\n");
		}
	}

}
