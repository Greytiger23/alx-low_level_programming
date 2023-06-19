#include <stdio.h>
/**
 * main - Entry point
 * three digit combinations
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b, c, d;
a = 0;
while (a <= 9)
{
for (b = 0; b <= 9; b++)
{
putchar(a + '0');
putchar(b + '0');
putchar(' ');
for (c = 0; c <= 9; c++)
{
for (d = c + 1; d <= 9; d++)
{
putchar(c + '0');
putchar(d + '0');
if (a > 9 || b > 8 || c > 9 || d > 9)
{
continue;
}
}
}
putchar(',');
putchar(' ');
}
a++;
}
putchar('\n');
return (0);
}
