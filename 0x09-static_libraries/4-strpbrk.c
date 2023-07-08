#include "main.h"
#include <string.h>

/**
 * _strpbrk - function that searches a string
 * @s: array
 * @accept: char pointer
 * Return: void
 */

char *_strpbrk(char *s, char *accept)
{
s = strpbrk(s, accept);
return (s);
}
