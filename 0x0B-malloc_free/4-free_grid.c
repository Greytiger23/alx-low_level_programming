#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a two dimensional grid
 * @grid: integer array
 * @height: integer pointer
 * Return: void
 */

void free_grid(int **grid, int height)
{
int a;
for (a = 0; a < height; a++)
{
free(grid[a]);
}
free(grid);
}
