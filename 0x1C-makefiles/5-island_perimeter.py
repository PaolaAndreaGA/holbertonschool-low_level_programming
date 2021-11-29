#!/usr/bin/python3
"""
    Technical interview preparation
"""
def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    p = 0
    for i in range (0, len(grid), 1):
        for j in range (0, len(grid[0]), 1):
            if grid[i][j] == 1:
                p = p + 4
                if j - 1 >= 0 and grid[i] [j - 1] == 1:
                    p = p - 2
                if i - 1 >= 0 and grid[i - 1] [j] == 1:
                    p = p - 2
return (p)

                
