#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * cap_string - function that capitalizes string
 * @a: char array
 * Return: void
 */

char *cap_string(char *a)
{
int b;
for (b = 0; a[b] != '\0'; b++)
{
while (a[b] >= 'a' && a[b] <= 'z')
{
b++;
if (a[b - 1] == ' ' || a[b -1] == '?' ||
a[b -1] == '\t' || a[b -1] == '\n' ||
a[b -1] == ',' || a[b -1] == ';' || 
a[b -1] == '.' || a[b -1] == '!' || 
a[b -1] == '(' || a[b -1] == ')' ||
a[b -1] == '{' || a[b -1] == '}' || b == 0)
{
a[b] = a[b] - 'a' + 'A';
}
}
}
return (a);
}
