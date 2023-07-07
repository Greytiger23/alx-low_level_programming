#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - function that prints reverse string
 * @s: pointer variable
 * Return: void
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
