# 633. Sum of Square Numbers

## Problem Statement
Given a non-negative integer `c`, decide whether there're two integers `a` and `b` such that \(a^2 + b^2 = c\).

### Example 1:
- **Input:** `c = 5`
- **Output:** `true`
- **Explanation:** \(1 * 1 + 2 * 2 = 5\)

### Example 2:
- **Input:** `c = 3`
- **Output:** `false`

### Constraints:
- \(0 \leq c \leq 2^{31} - 1\)

## Theoretical Approach

To solve the problem, we need to determine if there exist two integers \(a\) and \(b\) such that the sum of their squares equals \(c\). Here's the approach:

1. **Loop through possible values of `a`**:
   - Iterate from `a = 0` to \(a\) such that \(a^2 \leq c\).
   
2. **Compute `b`**:
   - For each value of `a`, compute \(b = \sqrt{c - a^2}\).

3. **Check if `b` is an integer**:
   - Verify if \(b\) is an integer by checking if `b` equals its integer cast `(int)b`.

4. **Return true if a valid pair is found**:
   - If such a pair \((a, b)\) is found where both \(a\) and \(b\) are integers, return `true`.

5. **Return false if no valid pair is found**:
   - If the loop completes without finding any valid pair, return `false`.

### Time Complexity
The time complexity of this solution is \(O(\sqrt{c})\) because the loop runs from 0 to \(\sqrt{c}\), and the square root operation inside the loop is \(O(1)\).

