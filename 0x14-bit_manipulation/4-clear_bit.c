#include "main.h"
#include <stdio.h>

/**
 * clear_bit - function that sets the value
 * of a bit to 0 at a given index
 * @n: unsigned long integer array
 * @index: unsigned integer
 * Return: void
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x, y;
x = sizeof(unsigned long int) * 8;
y = ~(1UL << index);
if (index >= x)
{
return (-1);
}
*n &= y;
return (1);
}
