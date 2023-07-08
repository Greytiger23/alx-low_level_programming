#include "main.h"
#include <string.h>

/**
 * _memset - function that fills memory with constant
 * @s: array
 * @b: char pointer variable
 * @n: first integer
 * Return: void
 */

char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (s);
}
