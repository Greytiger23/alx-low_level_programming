#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: integer
 * Return: void
 */
void print_diagonal(int n)
{
int a;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a <= n; a++)
{
_putchar(' ');
if (a == n)
{
_putchar('\\');
_putchar('\n');
}
}
}
}
