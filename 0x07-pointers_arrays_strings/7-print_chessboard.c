#include "main.h"
#include <string.h>

/**
 * print_chessboard - function that prints chessboard
 * @a: array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
int x, b;
for (x = 0; x < 8; x++)
{
for (b = 0; b < 8; b++)
{
_putchar(a[x][b]);
}
_putchar('\n');
}
}
