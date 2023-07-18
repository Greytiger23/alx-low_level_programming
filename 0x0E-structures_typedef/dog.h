#ifndef dog_h
#define dog_h
#define dog_t
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - define new type
 * @name: char
 * @age: float
 * @owner: char
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
struct dog_t;
struct dog_t *new_dog(char *name, float age, char *owner)
{
struct dog_t *b;
b = malloc(sizeof(struct dog));
if (b === NULL)
{
return (NULL);
}
b->name = name;
b->age = age;
b->owner = owner;
return b;
};
#endif
