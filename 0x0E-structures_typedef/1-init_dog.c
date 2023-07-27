#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - the new dogs struct whose
 * variable is initialised
 * @d: pointer to the struct of the dog
 * @name: Name
 * @age: Age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
