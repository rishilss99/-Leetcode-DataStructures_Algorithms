# Vertical Order Traversal of Binary Tree

## Problem

Given a binary tree, return the vertical order traversal of its nodes values.

For each node at position (X, Y), its left and right children respectively will be at positions (X-1, Y-1) and (X+1, Y-1).

Running a vertical line from X = -infinity to X = +infinity, whenever the vertical line touches some nodes, we report the values of the nodes in order from top to bottom (decreasing Y coordinates).

If two nodes have the same position, then the value of the node that is reported first is the value that is smaller.

Return an list of non-empty reports in order of X coordinate.  Every report will have a list of values of nodes.

## Logic

The problem is a new addition to the previous type of tree traversals problem we have dealt with before. Many traversal approaches can be used to solve this problem but the level order traversal seems to be quite efficient at the task. As we have a good grip on the algorithm we directly use the level order traversal of binary tree using a key approach. In this case we need to keep track of the x-coordinates which are accordingly added to array of vectors pre-defined thanks to the constraints on the no. of nodes. At each iteration of an element of the queue we retrieve both the x-coordinate as well as the node from 2 separate queues. Then just like the level order traversal template we insert left and right children nodes into the queue and the left and right children x-coordinates into the coordinates queue. A major componenet of the problem is dealing with elements at the same position (x and y coordinates same). To solve this issue we employ maps which have elements inserted in a sorted manner. We map the node->val as the key and the x-coordinate as the value, and insert the key value pair in the map. At the end of each level we insert the elements from the map into their respective vectors.

## Important Points

- Binary Tree

- Queue

- Level Order Traversal

- Map
