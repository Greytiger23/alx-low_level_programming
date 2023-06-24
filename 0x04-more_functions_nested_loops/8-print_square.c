#include "main.h"

/**
 * print_square - function that prints square
 * @size: integer
 * Return: void
 */
void print_square(int size)
{
int a, b;
int x = size;
int y = size;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 1; a <= x; a++)
{
_putchar('#');
}
_putchar('\n');
}
for (b = 1; b <= y; b++)
{
_putchar('#');
}
_putchar('\n');
}
