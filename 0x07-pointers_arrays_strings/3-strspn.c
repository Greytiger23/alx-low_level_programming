#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets the length of prefix
 * @s: array
 * @accept: char pointer
 * Return: void
 */

unsigned int _strspn(char *s, char *accept)
{
int a;
a = strspn(s, accept);
return (a);
}
