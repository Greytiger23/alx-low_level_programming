#!/usr/bin/python3

def island_perimeter(grid):
    a = 0
    b = 0
    r = len(grid)
    c = len(grid[0])
    for x in range(r):
        for y in range(c):
            if grid[x][y] == 1:
                a += 1
                if y > 0 and grid[x][y - 1] == 1:
                    b += 1
                if x > 0 and grid[x - 1][y] == 1:
                    b += 1
    return a * 4 - b * 2
