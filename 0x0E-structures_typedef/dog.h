#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - new struct of dog with name, age and owner
 * @name: identity of dog
 * @age: years of the dog
 * @owner: owner of the dog
**/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dag
 **/
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*DOG_H*/
