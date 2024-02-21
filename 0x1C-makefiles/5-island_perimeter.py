#!/usr/bin/python3
"""
This module calculates the parimeters of a landmass in a given rectangular grid.
"""


def island_perimeter(grid):
    """
    Perimeter calculater function.

    Args:
        grid: a rectangular grid input
    Return:
        Perimeter: int
    """
    
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter
