#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - function that checks the endianness
 * Return: void
 */

int get_endianness(void)
{
unsigned int a = 1;
char *b;
b = (char *)&a;
if (*b == 0)
{
return (0);
}
return (*b);
}
