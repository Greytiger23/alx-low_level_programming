#include <stdio.h>
/**
 * main - Entry point
 * this program prints single digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
while (a < 10)
{
putchar(a + '0');
if (a < 9)
{
putchar(',');
putchar(' ');
}
a++;
}
putchar('\n');
return (0);
}
