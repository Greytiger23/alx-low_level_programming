#include "main.h"
/**
 * print_times_table - prints times table
 * @n: number
 * Return: void
 */
void print_times_table(int n)
{
int a, b, c;
a = 0;
for (b = 0; b <= 15; b++)
{
for (; n <= 15; n++)
{
if (n > 15)
{
break;
}
else
{
if (n < 0)
{
break;
}
else
{
c = b * n;
printf("%d, %2d, %2d, %2d\n ", a, b, n, c);
}
}
}
}
}
