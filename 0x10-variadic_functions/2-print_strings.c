#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between
 * @n: number of strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int a;
char *b;
va_start(ap, n);
for (a = 0; a < n; a++)
{
b = va_arg(ap, char *);
if (b == NULL)
{
printf("(nil)");
return;
}
printf("%s", b);
if (separator != NULL && a != n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ap);
}
