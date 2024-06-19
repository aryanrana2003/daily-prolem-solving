### Problem Statement: Most Profit Assigning Work

You have `n` jobs and `m` workers. You are given three arrays: `difficulty`, `profit`, and `worker` where:

- `difficulty[i]` and `profit[i]` are the difficulty and the profit of the `i-th` job.
- `worker[j]` is the ability of `j-th` worker (i.e., the `j-th` worker can only complete a job with difficulty at most `worker[j]`).

Every worker can be assigned at most one job, but one job can be completed multiple times.

For example, if three workers attempt the same job that pays $1, then the total profit will be $3. If a worker cannot complete any job, their profit is $0.

Return the maximum profit we can achieve after assigning the workers to the jobs.

#### Example 1:


Input: difficulty = [2,4,6,8,10], profit = [10,20,30,40,50], worker = [4,5,6,7]
Output: 100
Explanation: Workers are assigned jobs of difficulty [4,4,6,6] and they get a profit of [20,20,30,30] separately.


#### Example 2:

Input: difficulty = [85,47,57], profit = [24,66,99], worker = [40,25,25]
Output: 0


#### Constraints:

- `n == difficulty.length`
- `n == profit.length`
- `m == worker.length`
- `1 <= n, m <= 10^4`
- `1 <= difficulty[i], profit[i], worker[i] <= 10^5`

### Approach

1. **Pairing Difficulty and Profit**: 
   - Create a vector of pairs `dp` where each pair consists of a job's difficulty and its corresponding profit.
   
2. **Sorting**:
   - Sort the `dp` vector based on the difficulty in ascending order. This helps in efficiently assigning jobs to workers.
   - Also, sort the `worker` array in ascending order to process workers in the order of their abilities.

3. **Maximizing Profit**:
   - Initialize `maxpr` to keep track of the total maximum profit.
   - Initialize `bestpr` to store the best profit found for any job a worker can perform.
   - Use an index `in` to traverse the `dp` array.
   - For each worker, check the jobs they can perform (i.e., jobs with difficulty less than or equal to the worker's ability). Update `bestpr` with the maximum profit available for that worker.
   - Add `bestpr` to `maxpr` for each worker.

