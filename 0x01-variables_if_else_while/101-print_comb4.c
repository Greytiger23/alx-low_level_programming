#include <stdio.h>
/**
 * main - Entry point
 * three digit combinations
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b, c;
a = 0;
while (a <= 9)
{
for (b = a + 1; b <= 9; b++)
{
for (c = b + 1; c <= 9; c++)
{
putchar(a + '0');
putchar(b + '0');
putchar(c + '0');
if (a < 8 || b < 9 || c < 9)
{
if (a == 7)
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
a++;
}
putchar('\n');
return (0);
}
