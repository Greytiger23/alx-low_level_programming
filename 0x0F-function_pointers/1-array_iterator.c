#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array
 * @array: pointer array
 * @size: size of an array
 * @action: pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int a;
if (array == NULL)
{
return;
}
if (action == NULL)
{
return;
}
for (a = 0; a < size; a++)
{
action(array[a]);
}
}
