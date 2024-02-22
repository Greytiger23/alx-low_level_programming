#!/usr/bin/python3
"""defines the measuring the perimeter"""


def island_perimeter(grid):
    """returns the perimetere of the island"""
    a = 0
    r = len(grid)
    c = len(grid[0])
    for x in range(r):
        for y in range(c):
            if grid[x][y] == 1:
                a += 4
                if y > 0 and grid[x][y - 1] == 1:
                    a -= 2
                if x > 0 and grid[x - 1][y] == 1:
                    a -= 2
    return a
