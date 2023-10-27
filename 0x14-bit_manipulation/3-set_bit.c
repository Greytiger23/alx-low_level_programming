#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - function that sets the value of
 * a bit to 1 at a given index
 * @n: integer
 * @index: integer
 * Return: void
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int a, b;
a = sizeof(unsigned long int) * 8;
b = 1UL << index;
if (index >= a)
{
return (-1);
}
*n |= b;
return (1);
}
