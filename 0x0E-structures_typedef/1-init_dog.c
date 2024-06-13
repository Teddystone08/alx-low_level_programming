# include "dog.h"
/**
 * init_dog - function that initialize a type struct dog
 * @d: passing structure at the function
 * @name: store a string fot main
 * @age: store anumber for main
 * @owner: store a string for main
 **/
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
