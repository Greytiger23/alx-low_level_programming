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
a = 0;
n = 0;
if (s1 == NULL || s2 == NULL)
{
s1 = "";
s2 = "";
}
while (s1[a] != '\0')
{
a++;
}
while (s2[n] != '\0')
{
n++;
}
b = malloc((a + n + 1) * sizeof(char));
if (b == NULL)
{
return (NULL);
}
a = 0;
n = 0;
while (s1[a] != '\0')
{
b[a] = s1[a];
a++;
}
while (s2[n] != '\0')
{
b[a] = s2[n];
a++;
n++;
}
b[a] = '\0';
return (b);
}
