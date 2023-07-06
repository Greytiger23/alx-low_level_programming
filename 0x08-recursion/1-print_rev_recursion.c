#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - function that prints reverse string
 * @s: pointer variable
 * Return: void
 */
void _print_rev_recursion(char *s)
{
int a, b;
a = strlen(s);
for (b = 0; b < a / 2; b++)
{
swap(s[b], s[a - b - 1]);
_print_rev_recursion(s, b + 1);
}
}
