# Isomorphic Strings

## Problem

Given two strings s and t, determine if they are isomorphic.

Two strings are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself.

## Logic

This problem can be easily be solved using a hashmap and hashset based solution. We focus on the conditions when the mapping of string s to string t can go wrong. Conditions : 1)Mapping of same element from s to 2 different characters from t 2)Mapping of 2 different elements from s to same element of t. We use a hashmap to verify that a character from s is not mapped to 2 different characters from t. The hashset contains all the characters from t that have already been mapped, in case another element from s is mapped to the same character from t we immediately return false. Although the hash table based solution is time efficient and a good suit for the problem, a much better approach would have been to map characters using a character array since, there are only 26 characters.

## Important Points

- Hash map

- Character Mapping 