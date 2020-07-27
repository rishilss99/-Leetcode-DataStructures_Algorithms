# Same Tree (Iteration)

## Problem

Given two binary trees, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical and the nodes have the same value.

## Logic

Using preorder inorder traversal to compare both the trees. The iterations are based on the first tree only and only check conditions are used to compared the second tree. For traversing a tree instead of recursion iteration using a stack is used. Note how the current node keeps shifting to the left until it hits a NULL node and then shifts the right node. It's like Left->Center->Right. Another approach as mentioned in the solution could include Morris Traversal.

## Important Points

- Iteration

- Stack

- Inorder traversal
