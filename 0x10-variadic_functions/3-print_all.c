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
int a, x;
char *s, *y;
a = strlen(format);
x = 0;
y = ", ";
va_start(ap, format);
while (format[x])
{
switch (format[x])
{
case 'c':
{
printf("%c", va_arg(ap, int));
break;
}
case 'i':
{
printf("%d", va_arg(ap, int));
break;
}
case 'f':
{
printf("%f", va_arg(ap, double));
break;
}
case 's':
{
s = va_arg(ap, char *);
if (s == NULL)
{
printf("(nil)");
break;
}
printf("%s", s);
break;
}
x++;
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
