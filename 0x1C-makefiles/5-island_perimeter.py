#!/usr/bin/python3
"""Defines an island perimeter finder function."""


def island_perimeter(grid):
    """Finds the primeter of an island
        defined by a list of lists
        Args:
            grid(list): grid map of island
                        with 1 indicating land
                        and 0 indicating water body
        - one cell is a square with length 1
        - grid cells are connected Horizontal or Vertically only
        - max size of grid is 100x100
        - grid is completely surrounded with water and
        the island doesnt have lakes init
    """
    perimeter = 0
    # return zero if grid doesnt exist or is zero
    if not grid or len(grid) == 0:
        return perimeter
    length = len(grid)
    width = len(grid[0])
    # nested loop to traverse grid squares
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            # print("{} {} {} {}".format(i, j, length, width))
            # check if theres land
            if grid[i][j] == 0:
                continue
            elif grid[i][j] == 1:
                """ check each of the four adjecent sides

                     j-1  J  j+1
                    -------------
                i-1 |   | x |   |
                    -------------
                 I  | x | 1 | x |
                    -------------
                i+1 |   | x |   |
                    -------------

                if there isnt another square(land), add side to perimieter
                """
                if (j - 1) < 0 or grid[i][j - 1] != 1:
                    perimeter += 1
                if (j + 1) == width or grid[i][j + 1] != 1:
                    perimeter += 1
                if (i - 1) < 0 or grid[i - 1][j] != 1:
                    perimeter += 1
                if (i + 1) == length or grid[i + 1][j] != 1:
                    perimeter += 1
    return perimeter
