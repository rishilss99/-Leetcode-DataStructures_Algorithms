# Populating Next Right Pointers in Each Node (Iteration)

## Problem

You are given a perfect binary tree where all leaves are on the same level, and every parent has two children. Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to NULL.

Initially, all next pointers are set to NULL.

## Logic

For this approach we follow the template level order traversal using a queue. This allows for a tried and tested approach to be applied to a derivative of a level order traversal problem. This approach does not rely on the structure of the binary tree and can be applied regardless of whether the tree is perfect binary or not.

## Important Points

- Level order traversal

- Iteration using queue