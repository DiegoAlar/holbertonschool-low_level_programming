#!/usr/bin/python3
""" This module contains function island_perimeter """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid """
    i = 0
    k = 0
    acum = 0
    while i < len(grid):
        while k < len(grid[i]):
            if grid[i][k] == 1:
                if i == 0 or grid[i - 1][k] == 0:
                    acum += 1
                if k == 0 or grid[i][k - 1] == 0:
                    acum += 1
                if k == (len(grid[i]) - 1) or grid[i][k + 1] == 0:
                    acum += 1
                if (i == len(grid) - 1) or grid[i + 1][k] == 0:
                    acum += 1
            k += 1
        k = 0
        i += 1
    return acum
