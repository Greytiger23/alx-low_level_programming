#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - function that converts a binary
 * number to an unsigned int
 * @b: char array
 * Return: void
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int y, x = 0;
if (b == NULL)
{
return (0);
}
for (y = 0; b[y] != '\0'; y++)
{
if (b[y] == '0')
{
x <<= 1;
}
else
{
if (b[y] == '1')
{
x = (x << 1) | 1;
}
else
{
return (0);
}
}
}
return (x);
}
