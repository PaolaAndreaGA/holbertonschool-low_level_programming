#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 *free_dog - function that frees dogs.
 *@d: string
 */

void free_dog(dog_t *d)
{

	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
