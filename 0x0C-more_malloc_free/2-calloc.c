#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for array
 * @nmemb: integer array
 * @size: integer pointer
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
int *a;
if (nmemb == 0)
{
return (NULL);
}
if (size == 0)
{
return (NULL);
}
a = (int *) malloc(nmemb * sizeof(size));
if (a == NULL)
{
return (NULL);
}
return (a);
}
