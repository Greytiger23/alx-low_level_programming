#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: unsigned long integer
 * @m: unsigned long integer
 * Return: void
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x, y;
x = n ^ m;
y = 0;
while (x)
{
y += x & 1;
x >>= 1;
}
return (y);
}
