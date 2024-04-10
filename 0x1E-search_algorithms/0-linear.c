#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: list of integers
 * @size: number of integers
 * @value: integer
 * Return: void
 */

int linear_search(int *array, size_t size, int value)
{
size_t a;
if (array == NULL)
{
return (-1);
}
for (a = 0; a < size; a++)
{
printf("Value checked array[%lu] = [%d]\n", a, array[a]);
if (array[a] == value)
{
return (a);
}
}
return (-1);
}
