# House Robber

## Problem Statement

You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given an integer array `nums` representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

### Examples

**Example 1**

Input: `nums = [1, 2, 3, 1]`

Output: `4`

Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3). Total amount you can rob = 1 + 3 = 4.

**Example 2**

Input: `nums = [2, 7, 9, 3, 1]`

Output: `12`

Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1). Total amount you can rob = 2 + 9 + 1 = 12.

### Constraints

- 1 <= nums.length <= 100
- 0 <= nums[i] <= 400

## Approach

To solve this problem, we can use dynamic programming. The idea is to keep track of the maximum amount of money that can be robbed up to each house, without triggering the alarm by robbing two adjacent houses. Here’s the step-by-step approach:

1. **Initialization**:
   - Handle edge cases where the number of houses (`n`) is 0 or 1.
   - Create a `dp` array where `dp[i]` will represent the maximum amount of money that can be robbed up to the `i-th` house.

2. **Base Cases**:
   - `dp[0]` is simply the amount in the first house, `nums[0]`.
   - `dp[1]` is the maximum amount of the first two houses, `max(nums[0], nums[1])`.

3. **Fill the DP Array**:
   - For each house from the 2nd to the last one, determine the maximum amount of money that can be robbed by considering two options:
     - Not robbing the current house, thus taking the amount up to the previous house, `dp[i-1]`.
     - Robbing the current house, thus taking the current house's money plus the amount up to the house before the previous one, `dp[i-2] + nums[i]`.
   - Take the maximum of these two options for `dp[i]`.

4. **Result**:
   - The value at `dp[n-1]` will contain the maximum amount of money that can be robbed without alerting the police.
