#include "main.h"
#include <string.h>

/**
 * print_chessboard - function that prints chessboard
 * @a: array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
int x, b, i;
i = strlen(a[8]);
for (x = 1; x <= i; x++)
{
for (b = 1; b <= x; b++)
{
_putchar(a[x][b]);
}
_putchar('\n');
}
}
