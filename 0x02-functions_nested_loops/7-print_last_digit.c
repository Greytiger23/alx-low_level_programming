#include "main.h"
/**
 * print_last_digit - prints the last digit of number
 * @a: the last number
 * Return: void
 */
int print_last_digit(int a)
{
int x;
x = a % 10;
if (x < 0)
{
x = x * -1;
}
_putchar(x + '0');
return (x);
}
