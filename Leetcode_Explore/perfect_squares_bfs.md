# Perfect Squares (BFS)

## Problem

Given a positive integer n, find the least number of perfect square numbers (for example, 1, 4, 9, 16, ...) which sum to n.

## Logic

The BFS approach considers finding the min numbers as a search problem. Specifically, the root node is the positive integer n, every time we subtract the value n with all the posiblle square values, which can be considered as a path from parent node to the child node. The goal is to find the shortest path, connect from root node to the node in which the value is zero. A simple way to reduce the computations is that: we could eliminate the node which we have seen before, since the path go through (if exists) the newly seen node, must not as short as any path that go through the previously seen node with same value.

## Important Points

- Breadth First Search

- Iteration with queue


