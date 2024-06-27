# 1791. Find Center of Star Graph

You are given an undirected star graph with n nodes labeled from 1 to n. A star graph is a graph where there is one central node connected to all other nodes by exactly n-1 edges.

The function takes a 2D integer array edges where edges[i] = [ui, vi] represents an edge between nodes ui and vi. Your task is to return the index (label) of the central node in the star graph.


## Example 1:
Input: edges = [[1,2],[2,3],[4,2]]
Output: 2 (Node 2 is connected to all other nodes)

## Example 2:
Input: edges = [[1,2],[5,1],[1,3],[1,4]]
Output: 1 (Node 1 is connected to all other nodes)
Constraints:

3 <= n <= 10^5 (number of nodes)
len(edges) == n - 1 (valid star graph with n-1 edges)
edges[i].length == 2 (each edge is represented as a pair of nodes)
1 <= ui, vi <= n (node labels)
ui != vi (no self-loops or duplicate edges)

## Theoretical Approach:

Center Node Property: The central node in a star graph is the one connected to all other nodes. In the context of edges, it will have a degree (number of connections) equal to n-1 (total edges) considering it's also connected to itself.

Hash Table for Degrees: Your code utilizes an unordered_map (hash) to efficiently store the degree of each node encountered in the edges. This map acts like a counter, keeping track of how many times each node appears in the edges list.

Iterating Through Edges: The loop for(auto it: edges) iterates through each edge in the edges vector. Within the loop:

it[0] and it[1] access the two nodes connected by the current edge.
hash[it[0]]++ and hash[it[1]]++ increment the degree count for both nodes in the hash table. This effectively keeps track of how many connections each node has.
Finding the Center: The second loop for(auto it : hash) iterates through the key-value pairs in the hash table (hash). Inside the loop:

node = it.first retrieves the current node (key) from the hash table.
degree = it.second retrieves the corresponding degree (value) for the node.
The conditional statement if(degree == edges.size()) checks if the current node's degree is equal to the total number of edges (edges.size()). Remember, this includes the implicit connection to itself.
Center Node Found: If the condition degree == edges.size() is true, it signifies that the current node (node) has a degree of n-1 (all other nodes connected) plus 1 (itself). This identifies the central node, and the function returns its index (node).

No Center Found: If the loop iterates through all nodes without finding a degree equal to edges.size(), it implies there might be an invalid input (not a true star graph) or all nodes have the same degree (disconnected graph). In such cases, the function returns -1 to indicate an error or no center node found.