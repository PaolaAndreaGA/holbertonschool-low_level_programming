#include <stdio.h>
/**
 *main - principal funtion
 *@argc: array counter
 *@argv: array character type
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	for(x = 0; x < argc; x++)
	{
	printf("%s'\n'", argv[0]);

	}

	return (0);
}
