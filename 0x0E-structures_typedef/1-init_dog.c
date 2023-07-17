#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * init_dog - function that initialize a variable of type
 * @d: structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
