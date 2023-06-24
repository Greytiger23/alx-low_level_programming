#include "main.h"

/**
 * more_numbers - functions that prints number more than once
 * Return; void
 */
void more_numbers(void)
{
int a, b;
int count = 1;
for (a = 1; a <= 10; a++)
{
for (b = 0; b <= 14; b++)
{
_putchar(b + '0');
}
_putchar('\n');
count++;
}
}
