#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: integer
 * Return: void
 */
void print_diagonal(int n)
{
int a, b;
int x = n;
int count = 1;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (a = 1; a <= x; a++)
{
for (b = 1; b <= a; b++)
{
if (b < a)
{
_putchar(' ');
}
else
{
_putchar('\\');
count++;
}
}
count = a % 2;
_putchar('\n');
}
}
}
