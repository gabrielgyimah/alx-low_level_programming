#!/usr/bin/python3

"""Island Perimeter Python Interview Prep"""


def island_perimeter(grid):
    """
    Finds the Perimeter of an Island
    """
    visited = set()

    def dfs(i, j):
        """Implement Dept First Search."""
        if i >= len(grid) or j >= len(grid[i]):
            return 1
        elif i < 0 or j < 0:
            return 1
        elif grid[i][j] == 0:
            return 1

        if (i, j) in visited:
            return 0

        visited.add((i, j))
        peri = dfs(i, j+1)
        peri += dfs(i+1, j)
        peri += dfs(i, j-1)
        peri += dfs(i-1, j)

        return peri

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                return dfs(i, j)
    return 0