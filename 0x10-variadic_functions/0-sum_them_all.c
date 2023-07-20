#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all
 * @n: integer pointer
 * Return: void
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int a, b;
a = 0;
va_start(ap, n);
if (n == 0)
{
return (0);
}
for (b = 0; b < n; b++)
{
a = a + va_arg(ap, int);
}
va_end(ap);
return (a);
}
