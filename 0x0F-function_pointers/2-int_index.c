#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - function that searches for an integer
 * @array: pointer array
 * @size: size of array
 * @cmp: pointer array
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int a;
if (size <= 0)
{
return (-1);
}
if (array == NULL)
{
return (-1);
}
if (cmp == NULL)
{
return (-1);
}
for (a = 0; a < size; a++)
{
if (cmp(array[a]))
{
return (a);
}
}
return (-1);
}
