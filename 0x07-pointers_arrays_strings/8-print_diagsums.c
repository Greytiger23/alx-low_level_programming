#include "main.h"
#include <string.h>

/**
 * print_diagsums - function that prints the sum of
 * two diagonals of a square
 * @a: array
 * @size: first integer
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int x, y;
int i, b;
x = 0;
b = 0;
for (i = 0; i < size; i++)
{
x = x + a[i * size + i];
}
for (y = size - 1; y >= 0; y--)
{
b = b + a[y * size + (size - y - 1)];
}
printf("%d, %d\n", x, b);
}
