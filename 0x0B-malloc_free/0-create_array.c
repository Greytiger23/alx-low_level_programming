#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars
 * @size: pointer variable
 * @c: char array
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
unsigned int x;
char *a;
a = malloc(sizeof(char) * size);
for (x = 0; x < size; x++)
{
a[x] = c;
}
if (size == 0 && a == NULL)
{
return (NULL);
}
return (a);
}
