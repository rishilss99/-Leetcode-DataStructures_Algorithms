# Detect Capital

## Problem

Given a word, you need to judge whether the usage of capitals in it is right or not.

We define the usage of capitals in a word to be right when one of the following cases holds:

All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital, like "Google".
Otherwise, we define that this word doesn't use capitals in a right way.

## Logic

Simple approach used where we iterate over all the elements checking whether they match the pattern set by the 1st element or not (0 based indexing). The XOR expression helps to check if the condition is violated in which case we return false. An edge case needs to be taken care of where the 0th element is small while all the rest elements are capital. A special condition at the start is used to take care of this corner case.

## Important Points

- ASCII characters

- Bit logic

- Strings