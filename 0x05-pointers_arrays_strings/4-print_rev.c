#include "main.h"
#include <stdio.h>
/**
 * print_rev - shows the reverse order
 * @s: pointer that changes
 * Return: Nothing
 */
void print_rev(char *s)
{
int w;
w = 0;
while (s[w] != '\0')
{
w++;
}
for (w = w - 1; w >= 0; w--)
{
_putchar(s[w]);
}
_putchar('\n');
}
