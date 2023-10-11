#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - Initializes a dog structure with provided values
 * @d: Pointer to the struct dog to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
