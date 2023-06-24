#include "main.h"

/**
 * print_triangle - function that prints triangle
 * @size: integer
 * Return: void
 */
void print_triangle(int size)
{
int a, b;
int x = size;
int count = 1;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 1; a <= x; a++)
{
_putchar(' ');
for (b = 1; b <= a; b++)
{
count++;
_putchar('#');
}
_putchar(' ');
count = a % 2;
_putchar('\n');
}
}
}
