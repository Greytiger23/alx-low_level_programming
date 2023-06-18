#include <stdio.h>
/**
 * main - Entry point
 * print numbers with putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
while (x < 10)
{
putchar(x + '0');
x++;
}
putchar('\n');
return (0);
}
