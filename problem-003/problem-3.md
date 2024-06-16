# Patching Array

## Problem Statement

Given a sorted integer array `nums` and an integer `n`, add/patch elements to the array such that any number in the range `[1, n]` inclusive can be formed by the sum of some elements in the array. Return the minimum number of patches required.

### Examples

**Example 1**

Input: `nums = [1, 3]`, `n = 6`

Output: `1`

Explanation: Combinations of `nums` are `[1]`, `[3]`, `[1, 3]`, which form possible sums of: 1, 3, 4. Now if we add/patch 2 to `nums`, the combinations are: `[1]`, `[2]`, `[3]`, `[1, 3]`, `[2, 3]`, `[1, 2, 3]`. Possible sums are 1, 2, 3, 4, 5, 6, which now covers the range `[1, 6]`. So we only need 1 patch.

**Example 2**

Input: `nums = [1, 5, 10]`, `n = 20`

Output: `2`

Explanation: The two patches can be `[2, 4]`.

**Example 3**

Input: `nums = [1, 2, 2]`, `n = 5`

Output: `0`

### Constraints

- 1 <= nums.length <= 1000
- 1 <= nums[i] <= 10^4
- nums is sorted in ascending order.
- 1 <= n <= 2^31 - 1

## Approach

The problem can be solved using a greedy algorithm. Here’s the step-by-step approach:

1. **Initialization**: 
   - Start with `missing` set to 1, which represents the smallest number that we cannot currently form.
   - Initialize `patches` to 0 to count the number of patches added.
   - Use `index` to iterate through the given `nums` array.

2. **Iterate and Patch**:
   - Loop until `missing` exceeds `n`.
   - Within the loop, check if the current element in `nums` (pointed to by `index`) is less than or equal to `missing`.
     - If yes, add this element to `missing` and move to the next element in `nums`.
     - If no, it means we need to patch the array by adding `missing` itself to cover this gap, and then double `missing` (since we’ve effectively added a number that allows us to reach twice as far).
   - Increment the patch count whenever a patch is added.

3. **End Condition**:
   - The loop terminates when `missing` exceeds `n`, ensuring that all numbers up to `n` can be formed with the available numbers and the added patches.
