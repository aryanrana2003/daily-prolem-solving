# Pass the Pillow
This repository contains the solution to the LeetCode problem "Pass the Pillow".

## # Problem Statement
There are n people standing in a line labeled from 1 to n. The first person in the line is holding a pillow initially. Every second, the person holding the pillow passes it to the next person standing in the line. Once the pillow reaches the end of the line, the direction changes, and people continue passing the pillow in the opposite direction.

For example, once the pillow reaches the nth person, they pass it to the n - 1th person, then to the n - 2th person and so on.

Given the two positive integers n and time, return the index of the person holding the pillow after time seconds.

## Solution
The solution utilizes the concept of a circular list to model the pillow passing. It calculates the cycle length (total time for the pillow to visit everyone once) and the remaining time within the current cycle. Based on this information, it determines the direction of the pillow (forward or backward) and returns the index of the person holding it.

## Included Files
solution.cpp: Contains the c++ code for solving the problem.


n: The total number of people in the line.
time: The number of seconds passed.
## Example:

This will output:

After 5 seconds, person 2 is holding the pillow.