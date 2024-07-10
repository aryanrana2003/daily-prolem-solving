# Pass the Pillow
This repository contains the solution to the LeetCode problem "Pass the Pillow".

## # Problem Statement
There are n people standing in a line labeled from 1 to n. The first person in the line is holding a pillow initially. Every second, the person holding the pillow passes it to the next person standing in the line. Once the pillow reaches the end of the line, the direction changes, and people continue passing the pillow in the opposite direction.

For example, once the pillow reaches the nth person, they pass it to the n - 1th person, then to the n - 2th person and so on.

Given the two positive integers n and time, return the index of the person holding the pillow after time seconds.

## Algorithm
 ```c++
 Start with the pillow at the first person (currentPillowPosition = 1).
 Begin counting time from 0 (currentTime = 0).
 Set the initial direction of movement towards the end of the line (direction = 1).
 Enter a loop that runs until currentTime is less than time.
 Check if moving in the current direction (direction) will keep the pillow within the line boundaries (1 to n):
 Move the pillow to the next position (currentPillowPosition + direction).
 Increment the current time (currentTime++) since one second has passed.
 Reverse the direction of movement (direction *= -1) if moving out of bounds.
 After simulating for time seconds, return currentPillowPosition, which identifies the person holding the pillow after time seconds.
 ```
 
## Included Files
solution.cpp: Contains the c++ code for solving the problem.

n: The total number of people in the line.
time: The number of seconds passed.
## Example:

This will output:

After 5 seconds, person 2 is holding the pillow.