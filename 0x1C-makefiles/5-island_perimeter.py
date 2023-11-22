#!/usr/bin/python3
"""Island perimeter calculation"""


def island_perimeter(grid):
    """Calculate the perimeter an island

    Args:
        grid (list): matrix grid with 0 representing water 1 land
    """
    perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                perimeter += 4

                if col - 1 >= 0 and grid[row][col - 1] == 1:
                    perimeter -= 1

                if row - 1 >= 0 and grid[row - 1][col] == 1:
                    perimeter -= 1

                if col + 1 < len(grid[0]) and grid[row][col + 1] == 1:
                    perimeter -= 1

                if row + 1 < len(grid) and grid[row + 1][col] == 1:
                    perimeter -= 1

    return perimeter
