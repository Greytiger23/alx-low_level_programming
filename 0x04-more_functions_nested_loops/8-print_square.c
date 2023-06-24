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
_putchar('#');
count++;
}
_putchar('\n');
}
}
}
