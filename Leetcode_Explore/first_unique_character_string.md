# First Unique Character in a String

## Problem

Given a string, find the first non-repeating character in it and return its index. If it doesn't exist, return -1.

## Logic

This problem can be solved with linear time complexity O(n) using a hashmap and a array. For the hashmap approach as we go over the entire string the first time we increment the occurences of the character stored in the hashmap. After one complete pass over the string we have stored all occuring elements and their number of occurences in the hashmap. Now we iterate over the given string a second time and this time we check the number of occurences of a character in the hashmap. If a chacracter in the string has occurence equal to 1 we immediately return the index or at the end return -1. In case of the array approach we can use a pre-defined array of size 26 for each character.

## Important Points

- Hashmap

- Mapping relations