#include "main.h"

int prime(int a, int b);
/**
 * is_prime_number - function that returns prime number
 * @n: first integer
 * Return: void
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (prime(n, n - 1));
}
/**
 * prime - calculates the prime number
 * @a: number
 * @b: iterator
 * Return: 1 if n is prime, 0 if not
 */
int prime(int a, int b)
{
int x;
x = a % b;
if (b == 1)
{
return (1);
}
if (x == 0 && b > 0)
{
return (0);
}
return (prime(a, b - 1));
}
