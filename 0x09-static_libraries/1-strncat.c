#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: char pointer variable
 * @src: char pointer variable
 * @n: first integer
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
