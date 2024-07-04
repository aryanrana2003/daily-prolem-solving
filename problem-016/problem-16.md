# 1509. Minimum Difference Between Largest and Smallest Value in Three Moves
## Difficulty: Medium

## Problem Description:

You are given an array of integers nums. In one move, you can choose any element in nums and change its value to any other integer. The goal is to minimize the difference between the largest and smallest element in the array after performing at most three such moves.

# Examples:

## Example 1:
Input: nums = [5, 3, 2, 4]
Output: 0
Explanation: We can change 2 to 3, 4 to 3, and 5 to 3 to achieve a minimum difference of 0.
## Example 2:
Input: nums = [1, 5, 0, 10, 14]
Output: 1
Explanation: We can change 5 to 0, 10 to 0, and 14 to 1 to achieve a minimum difference of 1 (no way to achieve 0).
## Example 3:
Input: nums = [3, 100, 20]
Output: 0
Explanation: We can change 100 to 7, 20 to 7, and 3 to 7 to achieve a minimum difference of 0.

# Constraints:

1 <= nums.length <= 10^5
-10^9 <= nums[i] <= 10^9


# Solution Approach:

Initialization: We define variables for size, minVal, minElement, maxElement, secondMin, thirdMin, secondMax, and thirdMax.

Finding Minimum and Maximum: We iterate through the nums array and update minElement and maxElement accordingly.

Finding Next Two Smallest and Largest: During the same loop, we compare each element with the current minElement, maxElement, secondMin, thirdMin, secondMax, and thirdMax. This way, we efficiently identify the next two smallest and next two largest elements while finding the minimum and maximum.

Simulating Moves: We calculate the minimum difference for each scenario:

maxElement - minElement: Original difference.
maxElement - thirdMin: Change the first three smallest elements to the last element.
secondMax - secondMin: Change the first two smallest to the second-to-last, and the first to the last.
maxElement - minElement: Move all elements to the smallest element (already calculated).
Return Minimum Difference: We return the minimum value of minVal obtained from all scenarios.



This approach avoids unnecessary sorting and efficiently identifies the key elements for calculating the minimum difference.