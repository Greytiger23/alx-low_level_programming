#include "main.h"
/**
 * print_to_98 - prints natural numbers
 * @n: natural numbers
 * Return: void
 */
void print_to_98(int n)
{
for (; n <= 98; n++)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d, ", n);
}
}
}
}
