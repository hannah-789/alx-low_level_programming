#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
  """
  Returns the perimeter of the island described in grid.

  Args:
      grid: A list of lists of integers, where 0 represents water and 1 represents land.

  Returns:
      The perimeter of the island.
  """
  rows, cols = len(grid), len(grid[0])
  perimeter = 0
  
  for row in range(rows):
    for col in range(cols):
      if grid[row][col] == 1:
        perimeter += 4  
        
        if col > 0 and grid[row][col - 1] == 1:
          perimeter -= 2

        if row > 0 and grid[row - 1][col] == 1:
          perimeter -= 2  
  
  return perimeter

