# 1382. Balance a Binary Search Tree

## Problem Description
Given the root of a binary search tree, return a balanced binary search tree with the same node values. If there is more than one answer, return any of them.

A binary search tree is balanced if the depth of the two subtrees of every node never differs by more than 1.

## Examples

### Example 1

**Input:**
root = [1,null,2,null,3,null,4,null,null]



**Output:**

[2,1,3,null,null,null,4]


**Explanation:**
This is not the only correct answer, [3,1,4,null,2] is also correct.

### Example 2

**Input:**

root = [2,1,3]


**Output:**

[2,1,3]


## Constraints

- The number of nodes in the tree is in the range [1, 10^4].
- 1 <= Node.val <= 10^5

# Theoretical Approach to Balancing a Binary Search Tree (BST)

## Steps of the DSW Algorithm


## 1. Create the Backbone (Vine)
The first step is to transform the BST into a “backbone” or “vine,” which is essentially a right-skewed tree (similar to a linked list). This is done by performing a series of right rotations.


## 2. Count the Nodes
Next, count the total number of nodes in the vine. This count will be used to determine the number of rotations needed to balance the tree.


## 3. Create a Balanced BST
The final step is to convert the vine into a balanced BST by performing a series of left rotations.

Left Rotation: This operation is used to move nodes to the left, transforming the vine into a balanced tree.
void leftRotate(TreeNode* parent, TreeNode* node) {
    TreeNode* tmp = node->right;
    node->right = tmp->left;
    tmp->left = node;
    parent->right = tmp;
}

Make Rotations: Perform a series of left rotations to balance the vine.
void makeRotations(TreeNode* vineHead, int count) {
    TreeNode* current = vineHead;
    for (int i = 0; i < count; ++i) {
        TreeNode* tmp = current->right;
        leftRotate(current, tmp);
        current = current->right;
    }
}

Balancing Process: Calculate the number of rotations needed and apply them iteratively.
int m = pow(2, floor(log2(nodeCount + 1))) - 1;
makeRotations(vineHead, nodeCount - m);
while (m > 1) {
    m /= 2;
    makeRotations(vineHead, m);
}

Conclusion
The DSW algorithm efficiently balances a BST by first converting it into a vine and then transforming the vine into a balanced tree through a series of rotations. This method ensures that the height of the BST is minimized, leading to optimal performance for search, insertion, and deletion operations.