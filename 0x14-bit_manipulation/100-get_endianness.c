#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian and 1 if small
 */

int get_endianness(void)
{
unsigned int a = 1;
char *b;
b = (char *)&a;
return (int)(*b);
}
