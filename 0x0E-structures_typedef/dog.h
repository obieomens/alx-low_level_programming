#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - Represents information about a dog
 * @name: Pointer to the name of the dog 
 * @age: Age of the dog 
 * @owner: Pointer to the name of the owner 
 */
struct dog
{
char *name;
float *age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif


