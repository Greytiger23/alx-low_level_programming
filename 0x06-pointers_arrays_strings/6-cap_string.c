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
b = 0;
while (a[b])
{
while (!(a[b] >= 'a' && a[b] <= 'z'))
{
b++;
if (a[b - 1] == ' ' || a[b - 1] == '?' ||
a[b - 1] == '\t' || a[b - 1] == '\n' ||
a[b - 1] == ',' || a[b - 1] == ';' ||
a[b - 1] == '.' || a[b - 1] == '!' ||
a[b - 1] == '(' || a[b - 1] == ')' ||
a[b - 1] == '{' || a[b - 1] == '}' ||
a[b - 1] == '"' || b == 0)
{
a[b] = _toupper(a[b]);
}
}
b++;
}
return (a);
}
