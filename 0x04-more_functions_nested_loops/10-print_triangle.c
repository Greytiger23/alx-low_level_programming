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
for (b = 1; b <= x; b++)
{
if (b < x-a+1)
{
_putchar(' ');
}
else
{
_putchar('#');
count++;
}
}
count = a % 2;
_putchar('\n');
}
}
}
