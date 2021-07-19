#include <stdio.h>
#include "dog.h"

/**
 *print_dog - prints a struct dog
 *@d: string
*/

void print_dog(struct dog *d)
{


	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}

	else
	{
		printf("Name: %s\nAge: %f \nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
}




