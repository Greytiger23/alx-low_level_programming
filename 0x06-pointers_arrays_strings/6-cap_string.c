#include "main.h"

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
if (a[b] >= 'a' && a[b] <= 'z')
{
a[b] = a[b] - 'a' + 'A';
}
}
return (a);
}
