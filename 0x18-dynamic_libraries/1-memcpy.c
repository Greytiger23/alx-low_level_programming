#include "main.h"
#include <string.h>

/**
 * _memcpy - function that copies memory area
 * @dest: array
 * @src: char pointer variable
 * @n: first integer
 * Return: void
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
