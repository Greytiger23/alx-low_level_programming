#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned int
 * @b: char array
 * Return: void
 */

unsigned int binary_to_uint(const char *b)
{
int a;
unsigned int c = 0;
if (b == NULL)
{
return (0);
}
for (a = 0; b[a] != '\0'; a++)
{
if (b[a] == '0')
{
c <<= 1;
}
else
{
if (b[a] == '1')
{
c = (c << 1) | 1;
}
else
{
return (0);
}
}
}
return (c);
}
