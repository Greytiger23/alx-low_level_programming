#include "main.h"
#include <stdlib.h>

/**
 * *alloc_grid - function that returns pointer to two dimensional
 * @width: integer pointer
 * @height: integer pointer
 * Return: void
 */

int **alloc_grid(int width, int height)
{
int **b;
int a, i;
b = malloc(sizeof(int *) * height);
if (b == NULL)
{
return (NULL);
}
if (width <= 0 || height <= 0)
{
return (NULL);
}
for (a = 0; a < height; a++)
{
b[a] = malloc(sizeof(int) * width);
if (b[a] == NULL)
{
for (; a >= 0; a--)
{
free(b[a]);
}
free(b);
return (NULL);
}
}
for (a = 0; a < height; a++)
{
for (i = 0; i < width; i++)
{
b[a][i] = 0;
}
}
return (b);
}
