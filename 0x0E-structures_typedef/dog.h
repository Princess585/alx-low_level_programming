#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializing a struct dog variable type
 * @d: points to initialize struct dog
 * @name: The name to initialize
 * @age: The age to initialize
 * @owner: The owner to initialize
 */

void init_dog(struct *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d-owner = owner;
}	
