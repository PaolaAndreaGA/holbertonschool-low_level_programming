#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	for (d = 1; d <= 100; d++)
	{
		if (d % 3 == 0 && d % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else if (d % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (d % 5 == 0)
		{
		       printf("Buzz\n");
		}
		else
		{
			printf("%d ", d);
		}
	}
}
