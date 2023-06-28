#include "main.h"
#include <string.h>

/**
 * puts2 - function that prints numbers
 * @str: char pointer variable
 * Return: void
 */

void puts2(char *str)
{
int a, b;
b = strlen(str);
for (a = 0; a < b; a += 2)
{
_putchar(str[a]);
}
_putchar('\n');
}
