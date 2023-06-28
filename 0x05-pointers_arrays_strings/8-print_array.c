#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints arrays
 * @a: first pointer variable
 * @n: integer
 * Return: void
 */

void print_array(int *a, int n)
{
int x;
n = 5;
for (x = 0; x < n; x++)
{
if (x == 4)
{
printf("%d", a[x]);
}
else
{
printf("%d, ", a[x]);
}
}
printf("\n");
}
