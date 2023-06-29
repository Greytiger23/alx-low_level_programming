#include "main.h"
#include <string.h>

/**
 * reverse_array - function that reverses of an array
 * @a: integer pointer variable
 * @n: first integer
 * Return: void
 */

void reverse_array(int *a, int n)
{
int x, b;
for (b = 0; b < n / 2; b++)
{
x = a[b];
a[b] = a[n - b - 1];
a[n - b - 1] = x;
}
}
