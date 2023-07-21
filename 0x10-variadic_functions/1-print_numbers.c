#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that print numbers
 * @separator: string to be printed
 * @n: number of integers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int b;
va_start(ap, n);
if (separator == NULL)
{
printf("%s", separator);
}
for (b = 0; b < n; b++)
{
printf("%d ", va_arg(ap, int));
}
printf("\n");
va_end(ap);
}
