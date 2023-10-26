#!/usr/bin/python3
"""
    island_perimeter module.
"""


def neighbour(grid, y, x):
    """
        no. neighbours of square.

        Args:
            grid (list): matrix.
            y (int): height
            x (int): width
    """
    k = 4

    if (y > 0) and grid[y - 1][x]:
        k -= 1
    if (x > 0) and grid[y][x - 1]:
        k -= 1
    if (y < len(grid) - 1) and grid[y + 1][x]:
        k -= 1
    if (x < len(grid[0]) - 1) and grid[y][x + 1]:
        k -= 1
    return k


def island_perimeter(grid):
    """
        island perimeter.

        Args:
            grid (list): matrix.
    """
    perm = 0
    for y in range(len(grid)):
        for x in range(len(grid[0])):
            if grid[y][x] == 1:
                perm += neighbour(grid, y, x)
    return perm
