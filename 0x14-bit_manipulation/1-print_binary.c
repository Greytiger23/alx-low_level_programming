#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - function that prints the binary
 * @n: unsigned long int
 * Return: void
 */

void print_binary(unsigned long int n)
{
unsigned long int a, b;
unsigned long int y, x = 1;
a = sizeof(unsigned long int) * 8;
b = 1UL << (a - 1);
for (y = 0; y < a; y++)
{
if (n & b)
{
x = 0;
}
if (!x)
{
_putchar((n & b) ? '1' : '0');
}
b >>= 1;
}
if (x)
{
_putchar('0');
}
}
