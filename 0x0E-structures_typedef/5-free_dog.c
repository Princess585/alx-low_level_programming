#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function that frees the allocated memory of a dog
 * @d: The freed struct dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
