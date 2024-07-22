# Reverse Substrings Between Each Pair of Parentheses

## Problem Description

You are given a string `s` that consists of lowercase English letters and brackets. The task is to reverse the strings in each pair of matching parentheses, starting from the innermost one. The result should not contain any brackets.

### Examples

#### Example 1
- **Input:** `s = "(abcd)"`
- **Output:** `"dcba"`

#### Example 2
- **Input:** `s = "(u(love)i)"`
- **Output:** `"iloveu"`
- **Explanation:** The substring `"love"` is reversed first, then the whole string is reversed.

#### Example 3
- **Input:** `s = "(ed(et(oc))el)"`
- **Output:** `"leetcode"`
- **Explanation:** First, the substring `"oc"` is reversed to `"co"`, then `"et(co)"` is reversed to `"etco"`, and finally, the whole string is reversed.

### Constraints

- `1 <= s.length <= 2000`
- `s` only contains lowercase English characters and parentheses.
- It is guaranteed that all parentheses are balanced.

## Solution Approach

1. **Stack Utilization:** Use a stack to keep track of characters. When encountering an opening parenthesis `(`, push it onto the stack. When encountering a closing parenthesis `)`, pop characters from the stack until an opening parenthesis `(` is encountered. Reverse the popped characters and push them back onto the stack.

2. **String Construction:** After processing all characters in the string `s`, the stack will contain the final result in the correct order without any parentheses. Convert the stack to a string to obtain the result.

