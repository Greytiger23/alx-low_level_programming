#include "main.h"
#include <string.h>

/**
 * _strchr - function that locates character
 * @s: array
 * @c: char pointer
 * Return: void
 */

char *_strchr(char *s, char c)
{
s = strchr(s, c);
return (s);
}
