#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - this function stores information about a dog
 * struct dog - Represents information about a dog
 * @name: Pointer to the name of the dog (string)
 * @age: Age of the dog (float)
 * @owner: Pointer to the name of the owner (string)
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
