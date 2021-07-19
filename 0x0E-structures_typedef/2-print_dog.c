#include <stdio.h>
#include "dog.h"

/**
 *print_dog - prints a struct dog
 *@d: string
*/

void print_dog(struct dog *d)
{
	char nil = nil;

	if (d == NULL)
	{
		return;
	}

	if ((*d).name == NULL)
	{
		printf("Name: %s\n", nil);
	}

	if ((*d).owner == NULL)
	{
		printf("Owner: %s\n", nil);
	}

	else
	{
		printf("Name: %s\nAge: %f \nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
}




