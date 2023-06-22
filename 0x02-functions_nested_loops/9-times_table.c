#include "main.h"
/**
 * times_table - prints times table
 * Return: void
 */
void times_table(void)
{
int a, b, c, d, e, f, g, h, i, j;
a = 0;
for (b = 0; b <= 9; b++)
{
c = b * 2;
d = b * 3;
e = b * 4;
f = b * 5;
g = b * 6;
h = b * 7;
i = b * 8;
j = b * 9;
printf("%2d, %2d, %2d, %2d, %2d, %2d, %2d, %2d, %2d, %2d\n", a, b, c, d, e, f, g, h, i, j);
}
}
