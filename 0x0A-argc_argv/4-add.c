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
	int i, adi = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}

		adi += atoi(argv[i]);
	}

	printf("%d\n", adi);
	return (0);
}
