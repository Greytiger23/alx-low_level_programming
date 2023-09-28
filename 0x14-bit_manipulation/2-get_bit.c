#include "main.h"
#include <stdio.h>

/**
 * get_bit - function that returns the value
 * of a bit at a given index
 * @n: unsigned long integer
 * @index: unsigned integer
 * Return: void
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int x, y;
x = sizeof(unsigned long int) * 8;
y = 1UL << index;
if (index >= x)
{
return (-1);
}
if (n & y)
{
return (1);
}
return (0);
}
