#include "main.h"
/**
 *   * times_table - prints times table 
 *     * Return: void
 *       */
void times_table(void)
{
	int a, b, c, d, e, f, g, h, i, j;
	a = 0;
	for (b = 0; b <=9; b++)
	{
		c = b * 2;
		d = b * 3;
		e = b * 4;
		f = b * 5;
		g = b * 6;
		h = b * 7;
		i = b * 8;
		j = b * 9;
		_putchar(a + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(b + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(c + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(d + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(e + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(f + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(g + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(h + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(i + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(j + '0');
		_putchar('\n');
	}
}
