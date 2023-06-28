#include "main.h"
#include <string.h>

/**
 * print_rev - function prints string in reverse
 * @s: char pointer variable
 * Return: void
 */

void print_rev(char *s)
{
int a, x; 
char y;
a = strlen(s);
for (x = 0; x < a/2; x++)
{
y = s[x];
s[x] = s[a - x - 1];
s[a - x - 1] = y;
_putchar(y);
}
_putchar('\n');
}
