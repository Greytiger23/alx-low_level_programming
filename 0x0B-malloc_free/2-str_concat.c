#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two string
 * @s1: char array
 * @s2: char array
 * Return: void
 */

char *str_concat(char *s1, char *s2)
{
int a, n;
char *b;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
b = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
if (b == NULL)
{
return (NULL);
}
for (a = 0; s1[a]; a++)
{
b[a] = s1[a];
}
for (n = 0; s2[n]; n++)
{
b[a + n] = s2[n];
}
b[a + n] = '\0';
return (b);
}
