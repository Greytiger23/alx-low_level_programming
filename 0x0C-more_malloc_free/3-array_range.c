#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers
 * @min: integer pointer
 * @max: integer pointer
 * Return: void
 */

int *array_range(int min, int max)
{
int *a;
int x;
if (min > max)
{
return (NULL);
}
a = malloc(max * sizeof(int));
if (a == NULL)
{
return (NULL);
}
for (x = 0; x < max; x++)
{
a[x] = x;
}
return (a);
}
