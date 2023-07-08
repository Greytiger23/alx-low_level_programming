#include "main.h"
#include <string.h>

/**
 * _puts - function that prints in string
 * @str: char pointer variable
 * Return: void
 */

void _puts(char *str)
{
int a, b;
b = strlen(str);
for (a = 0; a < b; a++)
{
_putchar(str[a]);
}
_putchar('\n');
}
