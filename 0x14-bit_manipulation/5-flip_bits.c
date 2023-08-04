#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - function that returns number of bits
 * and flips it
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: void
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int a, x;
a = n ^ m;
x = 0;
while (a)
{
x += a & 1;
a >>= 1;
}
return (x);
}
