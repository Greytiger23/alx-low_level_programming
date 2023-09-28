#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints the binary
 * representation of a number
 * @n: unsigned long integer
 * Return: void
 */

void print_binary(unsigned long int n)
{
unsigned long int w, i, e, t = 1;
w = sizeof(unsigned long int) * 8;
i = 1UL << (w - 1);
for (e = 0; e < w; e++)
{
if (n & i)
{
t = 0;
}
if (!t)
{
_putchar((n & i) ? '1' : '0');
}
i >>= 1;
}
if (t)
{
_putchar('0');
}
}
