#include <stdio.h>

/**
 * main - Entry point
 * prints numbers and writes message
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
for (a = 1; a <= 100; a++)
{
if ((a % 15) == 0)
{
printf("FizzBuzz ");
}
else
{
if ((a % 5) == 0)
{
printf("Buzz ");
}
else
{
if ((a % 3) == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", a);
if (a == 100)
{
printf("Buzz");
}
}
}
}
}
printf("\n");
return (0);
}
