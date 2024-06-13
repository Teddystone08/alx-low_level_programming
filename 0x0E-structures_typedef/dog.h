#ifndef DOG_H
#define DOG_H
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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
typedef struct dog dog_t;

#endif /*DOG_H*/
