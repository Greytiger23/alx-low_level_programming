#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - function that converts a binary number
 * @b: pointer
 * Return: void
 */

unsigned int binary_to_uint(const char *b)
{
int s, y, a = 1;
unsigned int x = 0;
if (b == NULL)
{
return (0);
}
for (y = 0; b[y] != '\0'; y++)
{
if (b[y] == '0' || b[y] == '1')
{
s = b[y] - '0';
x += s * a;
a *= 2;
}
else
{
return (0);
}
}
return (x);
}
