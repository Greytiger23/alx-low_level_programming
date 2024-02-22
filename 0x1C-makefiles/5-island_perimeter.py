#!/usr/bin/python3

def island_perimeter(grid):
    a = 0
    r = len(grid)
    c = len(grid[0])
    for x in range(r):
        for y in range(c):
            if grid[x][y] == 1:
                if x == 0 or grid[x - 1][y] == 0:
                    a += 1
                if x == r - 1 or grid[x + 1][y] == 0:
                    a += 1
                if y == 0 or grid[x][y - 1] == 0:
                    a += 1
                if y == c - 1 or grid[x][y + 1] == 0:
                    a += 1
    return a
