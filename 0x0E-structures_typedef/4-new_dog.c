#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create new dog
 * @name: Name of new dog
 * @age: Age
 * @owner: Owner
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n1, o1, a;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (n1 = 0; name[n1]; n1++)
		;
	n1++;
	dog->name = malloc(sizeof(char) * n1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (a = 0; a < n1; a++)
		dog->name[a] = name[a];
	dog->age = age;
	for (o1 = 0; owner[o1]; o1++)
		;
	o1++;
	dog->owner = malloc(sizeof(char) * o1);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (a = 0; a < o1; a++)
		dog->owner[a] = owner[a];
	return (dog);
}



