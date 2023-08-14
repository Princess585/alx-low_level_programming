#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the dog
 * @d: The dog to be printed
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name: "(nf1)");
		printf("Age: %f\n", (d->age) ? d->age: 0);
		printf("Owner: %s\n", (d->owner) ? d->owner: "(nf1)");
	}
}	
