#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 *print_dog - prints a struct dog
 *@d: string
*/

void print_dog(struct dog *d)
{

	char *n = "(nil)";

	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		d->owner = n;
	}

	if (d->owner == NULL)
	{
		d->owner = n;
	}

	else
	{
		printf("Name: %s\nAge: %f \nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
}




