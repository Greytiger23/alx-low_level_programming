#include <stdio.h>
/**
 * main - Entry point
 * print numbers of base 
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
char a;
while (x < 10)
{
putchar(x + '0');
x++;
}
for (a = 'a'; a <= 'f'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
