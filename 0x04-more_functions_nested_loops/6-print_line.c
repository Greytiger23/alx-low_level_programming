#include "main.h"

/**
 * print_line - function that prints a line
 * @n: integer
 * Return: void
 */
void print_line(int n)
{
int a;
if (n <= 0)
{
putchar('\n');
}
else
{
for (a = 0; a < n; a++)
{
putchar('_');
}
putchar('\n');
}
}
