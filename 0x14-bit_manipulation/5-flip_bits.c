#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * filp_bits - function that returns the number of bits you
 * would need to flip to get from one number to another
 * @n: integer
 * @m: integer
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
