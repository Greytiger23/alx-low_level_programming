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
char c, *s;
int i, a, x;
float f;
a = strlen(format);
x = 0;
va_start(ap, format);
while (format[x])
{
switch (format[x])
{
case 'c':
{
c = va_arg(ap, int);
printf("%d", c);
break;
}
case 'i':
{
i = va_arg(ap, int);
printf("%d", i);
break;
}
case 'f':
{
f = (float)va_arg(ap, double);
printf("%f", f);
break;
}
case 's':
{
s = va_arg(ap, char *);
if (s == NULL)
{
printf("(nil)");
}
printf("%s", s);
break;
}
x++;
continue;
}
if (format[x] == 'c' || format[x] == 'i' ||
format[x] == 'f' || format[x] == 's' ||
x != a - 1 || format != NULL)
{
printf(", ");
}
x++;
}
printf("\n");
va_end(ap);
}
