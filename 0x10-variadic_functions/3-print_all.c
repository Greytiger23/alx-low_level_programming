#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - function that prints anything
 * @format: list of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
va_list ap;
unsigned int a, x = 0;
char *s, *y = ", ";
a = strlen(format);
if (format == NULL)
{
printf("\n");
exit(0);
}
va_start(ap, format);
while (format[x])
{
switch (format[x])
{
case 'c':
printf("%c", va_arg(ap, int));
break;
case 'i':
printf("%d", va_arg(ap, int));
break;
case 'f':
printf("%f", va_arg(ap, double));
break;
case 's':
s = va_arg(ap, char *);
printf("%s", s != NULL ? s : "(nil)");
break;
default:
x++;
continue;
}
if (x != a - 1 && format != NULL)
{
printf("%s", y);
}
x++;
}
printf("\n");
va_end(ap);
}
