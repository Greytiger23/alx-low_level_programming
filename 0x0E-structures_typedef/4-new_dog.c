#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int a, b;
if (name == NULL)
{
return (NULL);
}
if (age < 0)
{
return (NULL);
}
if (owner == NULL)
{
return (NULL);
}
d = malloc(sizeof(dog_t));
a = strlen(name);
b = strlen(owner);
if (d == NULL)
{
return (NULL);
}
d->name = malloc((a + 1) * sizeof(char));
if (d->name == NULL)
{
free(d);
return (NULL);
}
d->owner = malloc((b + 1) * sizeof(char));
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
d->name = strcpy(d->name, name);
d->age = age;
d->owner = strcpy(d->owner, owner);
return (d);
}
