#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - a struct that create a dog info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

