#include "main.h"
#include <math.h>

/**
 * _pow_recursion - function that returns the power
 * @x: integer
 * @y: integer
 * Return: void
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
