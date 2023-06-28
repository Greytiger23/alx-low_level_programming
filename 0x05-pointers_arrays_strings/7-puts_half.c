#include "main.h"
#include <string.h>

/**
 * puts_half - function that  prints half of string
 * @str: char pointer variable
 * Return: void
 */

void puts_half(char *str)
{
int n, b;
b = strlen(str);
for (n = b / 2; n < b; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
