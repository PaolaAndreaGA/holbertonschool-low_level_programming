#include <stdio.h>
#include "dog.h"

/**
 *init_dog - STRUCTURE DOG INITIALIZATION
 *@d: string
 *@name:  Dog's name
 *@age: Dog's age
 *@owner: Dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{

	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}












