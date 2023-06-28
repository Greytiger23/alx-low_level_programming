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
n = sizeof(a) / sizeof(a[0]);
for (x = 0; x < n; x++)
{
printf("%d, ", a[x]);
}
printf("\n");
}
