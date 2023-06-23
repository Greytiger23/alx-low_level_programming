#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: integer
 * Return: void
 */
void print_diagonal(int n)
{
int a;
if ( n <= 0)
{
putchar('\n');
}
else
{
for (a = 0; a < n; a++)
{
putchar(' ');
if (a == n)
{
putchar('\\');
}
}
putchar('\n');
}
}
