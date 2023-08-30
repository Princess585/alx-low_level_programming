#ifndef DOG_H
#define DOG_H

/**
 * struct dog - initializing a struct dog variable type
 * @name: The dog name
 * @age: The dog age
 * @owner: The dog owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - The typedef for the struct dog
 */
typedef struct dog dog_t;

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
