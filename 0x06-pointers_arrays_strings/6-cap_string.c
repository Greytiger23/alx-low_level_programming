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
int b, c;
c = sizeof(a);
for (b = 0; b < c; b++)
{
a[b] = toupper(a[b]) - 1;
}
return (a);
}
