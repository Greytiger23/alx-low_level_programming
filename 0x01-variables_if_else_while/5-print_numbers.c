#include <stdio.h>
/**
 * main - Entry point
 * prints numbers of base
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
a = 0;
while (a < 10)
{
printf("%d", a);
a = a + 1;
}
if (a > 9)
{
printf(" ");
}
printf("\n");
return (0);
}
