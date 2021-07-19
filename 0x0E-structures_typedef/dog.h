

#ifndef DOG_H
#define DOG_H

/**
 *struct dog - DOG DEFINITION
 *@name:  Dog's name
 *@age: Dog's age
 *@owner: Dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void _putchar(int);

#endif /* DOG_H */