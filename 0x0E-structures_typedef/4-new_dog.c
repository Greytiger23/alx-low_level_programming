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

dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *d;
d = malloc(sizeof(struct dog));
if (d == NULL)
{
return (NULL);
}
d->name = name;
d->age = age;
d->owner = owner;
return (d);
}
