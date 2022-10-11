#include "dog.h"
#include <stdlib.>
/**
 * new_dog - creates a new dog
 * @name: name of pet
 * @age: age of pet
 * @owner: owner of per
 * Return: new dog
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(p);
		free(owner);
		return (NULL);
	}
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}

