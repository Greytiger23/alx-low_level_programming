#include "main.h"
#include <string.h>

/**
 * _strncpy - function that copies a string
 * @dest: char pointer variable
 * @src: char pointer variable
 * @n: first integer
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
