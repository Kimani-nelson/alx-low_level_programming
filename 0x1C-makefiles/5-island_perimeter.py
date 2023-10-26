#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
        grid (List[List[int]]): A grid where 1 represents land and 0 represents water.

    Returns:
        int: The perimeter of the island.

    Constraints:
        - Grid is rectangular, with a width and height not exceeding 100.
        - The grid is completely surrounded by water, and there is one island (or nothing).
        - The island doesn't have "lakes" (water inside that isn't connected to the water around the island).
    """

    perimeter = 0

    # Check each cell in the grid
    for i in range(len(grid)):
        for j in range(len(grid[0]):
            if grid[i][j] == 1:
                # Check the four neighboring cells (up, down, left, right)
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j == len(grid[0]) - 1 or grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter

