#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block
 * @ptr: array
 * @old_size: integer pointer
 * @new_size: integer pointer
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
ptr = malloc(old_size * sizeof(int));
if (new_size == old_size)
{
return (ptr);
}
if (new_size < old_size)
{
ptr = realloc(ptr, new_size * sizeof(int));
}
if (ptr == NULL)
{
ptr = malloc(new_size * sizeof(int));
}
else
{
free(ptr);
return (NULL);
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
return (ptr);
}
