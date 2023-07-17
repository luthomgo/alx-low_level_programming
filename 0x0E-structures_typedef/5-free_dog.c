#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function hat frees dogs
 * @dog: the dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
