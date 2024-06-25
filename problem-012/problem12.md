## 1038. Binary Search Tree to Greater Sum Tree

**Medium**

### Topics
- Binary Search Tree
- Tree
- Depth-First Search

### Companies
- N/A

### Hint
Given the root of a Binary Search Tree (BST), convert it to a Greater Tree such that every key of the original BST is changed to the original key plus the sum of all keys greater than the original key in BST.

As a reminder, a binary search tree is a tree that satisfies these constraints:
- The left subtree of a node contains only nodes with keys less than the node's key.
- The right subtree of a node contains only nodes with keys greater than the node's key.
- Both the left and right subtrees must also be binary search trees.

### Example 1:

Input: root = [4,1,6,0,2,5,7,null,null,null,3,null,null,null,8] 
Output: [30,36,21,36,35,26,15,null,null,null,33,null,null,null,8]


### Example 2:

Input: root = [0,null,1]
 Output: [1,null,1]


### Constraints:
- The number of nodes in the tree is in the range [1, 100].
- 0 <= Node.val <= 100
- All the values in the tree are unique.


### Theoretical Approach

1. **Understanding the Problem**:
   - We need to convert a given Binary Search Tree (BST) into a Greater Sum Tree (GST). In a GST, each node's value is replaced by the sum of all values greater than or equal to the node's value in the original BST.

2. **Properties of BST**:
   - In a BST, for any given node, all values in its right subtree are greater, and all values in its left subtree are smaller.

3. **Reverse In-order Traversal**:
   - To achieve the transformation, we can use a reverse in-order traversal (right -> node -> left). This traversal ensures that we visit nodes in descending order of their values.

4. **Accumulating the Sum**:
   - We maintain a running sum (`sum`) that accumulates the values of nodes as we traverse. Starting from the largest value (rightmost node), we add each node's value to `sum` and update the node's value to `sum`.

5. **Steps in the Code**:
   - **Initialization**: We initialize `sum` to 0.
   - **Traversal Function**: The `traverse` function performs the reverse in-order traversal.
     - If the current node is not null, we first traverse the right subtree.
     - We then update `sum` by adding the current node's value.
     - The current node's value is updated to `sum`.
     - Finally, we traverse the left subtree.
   - **Main Function**: The `bstToGst` function initiates the traversal from the root and returns the modified tree.
