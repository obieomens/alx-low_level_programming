#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - the new dog structinitialized
 * @d: pointer to the struct of the new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: the owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
