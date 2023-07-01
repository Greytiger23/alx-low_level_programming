#include "main.h"

/**
 * print_number - function that prints numbers
 * @n: integer pointer variable
 * Return: void
 */

void print_number(int n)
{
if (n / 10)
{
print_number(n / 10);
}
else
{
if (n < 0)
{
_putchar('-');
n = -n;
}
}
_putchar(n % 10 + '0');
}
