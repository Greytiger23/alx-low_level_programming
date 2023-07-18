#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: void
 */

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
}
