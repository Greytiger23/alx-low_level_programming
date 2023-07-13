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
int x;
char *a;
n = 0;
if (str == NULL)
{
return (NULL);
}
a = malloc((strlen(str) + 1) * sizeof(char));
if (a == NULL)
{
return (NULL);
}
for (x = 0; str[x]; x++)
{
a[x] = str[x];
}
a[x] = '\0';
return (a);
}
