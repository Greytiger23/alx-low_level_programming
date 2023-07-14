#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: char array
 * @s2: char array
 * @n: integer pointer
 * Return: void
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int x, y;
char *a;
if (s1 == NULL)
{
s1 = " ";
}
if (s2 == NULL)
{
s2 = " ";
}
a = malloc((strlen(s1) + strlen(s2) + 1) * n);
if (a == NULL)
{
return (NULL);
}
for (x = 0; s1[x]; x++)
{
a[x] = s1[x];
}
for (y = 0; y < 6; y++)
{
if (n >= strlen(s2))
{
a[x + y] = s2[y];
}
a[x + y] = s2[y];
}
a[x + y] = '\0';
return (a);
}
