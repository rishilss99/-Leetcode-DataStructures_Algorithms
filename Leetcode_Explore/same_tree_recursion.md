## Problem:

### Given two binary trees, write a function to check if they are the same or not.

### Two binary trees are considered the same if they are structurally identical and the nodes have the same value.

## Logic:

### Using recursive preorder traversal of the tree to match both the trees continuously as we move along nodes of each tree. Instead of preorder traversal could have used either of inorder or postorder traversal as well. The code can still be shortened by using a comparative relation at the end which compares both the trees and compares the boolean values returned.
