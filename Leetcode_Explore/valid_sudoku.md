# Valid Sudoku

## Problem

Determine if a 9x9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

1) Each row must contain the digits 1-9 without repetition.
2) Each column must contain the digits 1-9 without repetition.
3) Each of the 9 3x3 sub-boxes of the grid must contain the digits 1-9 without repetition.

Note:

A Sudoku board (partially filled) could be valid but is not necessarily solvable.
Only the filled cells need to be validated according to the mentioned rules.
The given board contain only digits 1-9 and the character '.'.
The given board size is always 9x9.

## Logic

This problem can be solved using both arrays and hashmaps. Since, insertion and search operations in hashmaps are O(1) we prefer a hashmap over an array. We create 3 hashmaps : rows, cols, squares. Each hashmap contains an integer as the key and an array of integers of size 9 as the value. As we iterate over the entire 9x9 sudoku square we check whether any of the integers has been inserted into any of the hashmaps before. This checks the non-repeatability of characters in rows, columns and 3x3 squares of the sudoku. In case any character has been inserted we return false immediately otherwise we add it to the hashmap. After the complete traversal if none of the conditions has been violated we return false.

## Important Points

- Hashmap

- Array manipulation