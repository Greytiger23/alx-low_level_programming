#include "main.h"
#include <stdio.h>

/**
 * get_endianness - function that checks the endianness
 * Return: void
 */

int get_endianness(void)
{
unsigned int x;
char *y;
x = 1;
y = (char *)&x;
if (*y == 0)
{
return (0);
}
return (*y);
}
