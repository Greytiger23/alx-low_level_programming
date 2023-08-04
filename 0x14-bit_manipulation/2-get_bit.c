#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - function that returns the value of a bit
 * @n: unsigned long int
 * @index: unsigned int
 * Return: void
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int a, b;
a = sizeof(unsigned long int) * 8;
b = 1UL << index;
if (index >= a)
{
return (-1);
}
if (n & b)
{
return (1);
}
return (0);
}
