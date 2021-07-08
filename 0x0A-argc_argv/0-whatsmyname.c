#include <stdio.h>
/**
 *main - principal funtion
 *@argc: array counter
 *@argv: array character type
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int x = 0;

	while (x < argc)
	{
	printf("%s'\n'", argv[0]);
	x++;
	}

	return (0);
}
