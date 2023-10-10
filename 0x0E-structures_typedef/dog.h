#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Represents information about a dog
 * @name: Pointer to the name of the dog (string)
 * @age: Age of the dog (float)
 * @owner: Pointer to the name of the owner (string)
 *
 * Description: This structure stores information about a dog,
 * including its name, age, and owner's name.
 */
struct dog
{
char *name;
float age;
char *owner;
};

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
#endif
