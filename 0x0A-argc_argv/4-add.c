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
	int i;
	unsigned int adi;

	adi = 0;
	for (i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]))
		{
			adi += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%u\n", adi);

	return (0);
}
