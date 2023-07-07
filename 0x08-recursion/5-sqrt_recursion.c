#include "main.h"

int asqrt(int a, int b);
/**
 * _sqrt_recursion - function that returns square root
 * @n: integer
 * Return: void
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (asqrt(n, 0));
}
/**
 * asqrt - calculates square root
 * @a: number
 * @b: iterator
 * Return: void
 */
int asqrt(int a, int b)
{
int x;
x = b * b;
if (x > a)
{
return (-1);
}
if (x == a)
{
return (b);
}
return (asqrt(a, b + 1));
}
