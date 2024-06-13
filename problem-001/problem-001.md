# Minimum Falling Path Sum

## Problem Statement

Given an `n x n` matrix of integers, your task is to find the minimum sum of any falling path through the matrix. A falling path starts at any element in the first row and chooses the element in the next row that is either directly below or diagonally left/right. Specifically, if you are at position `(row, col)`, the next element can be chosen from `(row + 1, col - 1)`, `(row + 1, col)`, or `(row + 1, col + 1)` in the next row.

## Examples

### Example 1

**Input:**

```python
matrix = [
  [2, 1, 3],
  [6, 5, 4],
  [7, 8, 9]
]

Output: 13

Explanation:

There are two falling paths with a minimum sum:

1 -> 4 -> 8 with a sum of 1 + 4 + 8 = 13
1 -> 5 -> 7 with a sum of 1 + 5 + 7 = 13

Example 2
Input:

matrix = [
  [-19, 57],
  [-40, -5]
]

Explanation:

The falling path with a minimum sum is -19 -> -40, with a sum of -19 + (-40) = -59.
