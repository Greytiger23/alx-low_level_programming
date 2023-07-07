#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - function that returns square root
 * @n: integer
 * Return: void
 */

int _sqrt_recursion(int n)
{
int a;
a = n * n;
if (a > n)
{
return (-1);
}
if (a == n)
{
return (a);
}
return (_sqrt_recursion(a - 1));
}
