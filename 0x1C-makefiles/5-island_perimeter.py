#!/usr/bin/python3
"""Modue that calculates the perimeter of an island in a grid."""


def island_perimeter(grid):
    """Returns the number of water neighbors a cell has in a grid."""

    perim = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col]:
                perim += num_water_neighbors(grid, row, col)

    return perim


def num_water_neighbors(grid, row, col):
    """Returns the number of water neighbors a cell has in a grid."""

    num = 0

    if row <= 0 or not grid[row - 1][col]:
        num += 1
    if col <= 0 or not grid[row][col - 1]:
        num += 1
    if col >= len(grid[row]) - 1 or not grid[row][col + 1]:
        num += 1
    if row >= len(grid) - 1 or not grid[row + 1][col]:
        num += 1

    return num
