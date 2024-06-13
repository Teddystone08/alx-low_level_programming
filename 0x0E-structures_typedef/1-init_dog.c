# include "dog.h"
/**
 * init_dog - function that initialize a type struct dog
 * @d: passing string from user
 * @name: identity of the dog
 * @age: years of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
