#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - function that changes lower into uppercase
 * @a: pointer variable
 * Return: void
 */

char *string_toupper(char *a)
{
int x;
for (x = 0; a[x] != '\0'; x++)
{
if (a[x] >= 'a' && a[x] <= 'z')
{
a[x] = a[x] - 'a' + 'A';
}
}
return (a);
}
