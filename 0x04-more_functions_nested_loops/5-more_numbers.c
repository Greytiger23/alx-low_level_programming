#include "main.h"

/**
 * more_numbers - functions that prints number more than once
 * Return; void
 */
void more_numbers(void)
{
int a, b;
for  (b = 1; b <= 10; b++)
{
for (a = 0; a <= 14; a++)
{
putchar(a + '0');
}
putchar('\n');
}
}
