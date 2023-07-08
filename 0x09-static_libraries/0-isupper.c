#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - function that checks uppercase
 * @c: integer
 * Return: void
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
