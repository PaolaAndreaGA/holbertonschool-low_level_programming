#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long x = 612852475143;
	int y;

	for (y = 2; x > 1; y++)
	{
		while (x % y == 0)
		{
			x = x / y;
		}

	}

	printf("%d\n", y);
	return (0);
}
