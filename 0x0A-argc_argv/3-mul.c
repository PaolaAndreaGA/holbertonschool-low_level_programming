#include <stdio.h>
#include <stdlib.h>
/**
 *main - principal funtion
 *@argc: array counter
 *@argv: array character type
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y, z;

	if (argc != 3)
	{
		printf("Error\n");
	}

	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		z = x * y;

		printf("%d\n", z);
	}

	return (0);
}
