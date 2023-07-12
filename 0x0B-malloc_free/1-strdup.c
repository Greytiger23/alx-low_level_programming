#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that returns a pointer newly allocated
 * @str: char array
 * Return: pointer to string, NULL if fails
 */

char *_strdup(char *str)
{
int x, n;
char *a;
a = strdup(str);
if (str == NULL || a == NULL)
{
return (NULL);
}
for (x = 0; x < str[x]; x++)
{
a[x] = str[x];
}
return (a);
}
