#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - function that frees dogs
 * @d: pointer variable
 * Return: void
 */

void free_dog(dog_t *d)
{
if (d == NULL)
{
return;
}
free(d->name);
free(d->owner);
free(d);
}
