#include "main.h"
/**
 * print_to_98 - prints natural numbers
 * @n: natural numbers
 * Return: void
 */
void print_to_98(int n)
{
for (n = 0; n <= 98; n++)
{
printf("%d, ", n);
if (n > 98)
{
continue;
}
}
printf("\n");
}
