# Maximum Depth of N-ary Tree

## Problem

Given a n-ary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

Nary-Tree input serialization is represented in their level order traversal, each group of children is separated by the null value (See examples).

## Logic

The problem is quite similar to finding the maximum depth of the binary tree. The only change is that instead of specifically using the left and right children of the parent nodes we compare the depths of all children of a node using a max variable which holds the maximum depth. For the particular solution we have employed top-down recursive approach but we can also employ the bottom-up recursive approach.

## Important Points

- N-ary Tree

- Level order traversal

- Top-down recursion