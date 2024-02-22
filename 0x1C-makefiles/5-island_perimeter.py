#!/usr/bin/python3

def island_perimeter(grid):
    if not grid:
        return 0
    a = 0
    r, c = len(grid), len(grid[0])
    for x in range(r):
        for y in range(c):
            if grid[x][y] == 1:
                a += 4
                if x > 0 and grid[x - 1][y] == 1:
                    a -= 2
                if y > 0 and grid[x][y - 1] == 1:
                    a -= 2
    return a
