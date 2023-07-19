#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_name - fucntion that prints a name
 * @name: pointer array
 * @f: pointer array
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL)
{
return;
}
if (f == NULL)
{
return;
}
f(name);
}
