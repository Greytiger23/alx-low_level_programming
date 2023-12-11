#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - convert an integer into string
 * @s: char
 * Return: void
 */
int _atoi(char *s)
{
int a = 0;
int b = 1;
while (*s)
{
if (*s == '-')
{
b *= -1;
}
else if (*s >= '0' && *s <= '9')
{
a = a * 10 + (*s - '0');
}
else if (a != 0)
{
break;
}
s++;
}
return (a * b);
}
