#!/usr/bin/python3
def island_perimeter(grid):
  """
  This function calculates the perimeter of the island in a grid.

  Args:
      grid: A list of lists of integers, where 0 represents water and 1 represents land.

  Returns:
      The perimeter of the island.
  """
  # Initialize variables
  rows, cols = len(grid), len(grid[0])
  perimeter = 0

  # Iterate through each cell in the grid
  for row in range(rows):
    for col in range(cols):
      # Check if the current cell is land
      if grid[row][col] == 1:
        # Add 4 to the perimeter for each unvisited neighbor (water)
        perimeter += 4
        # Check and subtract 2 for each visited neighbor (land) on the right and bottom
        if col < cols - 1 and grid[row][col + 1] == 1:
          perimeter -= 2
        if row < rows - 1 and grid[row + 1][col] == 1:
          perimeter -= 2

  return perimeter

