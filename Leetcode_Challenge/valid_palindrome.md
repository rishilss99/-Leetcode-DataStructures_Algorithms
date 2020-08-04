# Valid Palindrome

## Problem

Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Note: For the purpose of this problem, we define empty string as valid palindrome.

## Logic

This question can be solved in 2 efficient ways. The first approach requires the use of commonly used functions such as lowercase() and isalnum(). The second approach though not as direct relies on the use of common ASCII character ranges - Numerics (48 to 57), Uppercase alphabets (65 to 90), Lowercase alphabets (97 to 122). Since, the original given string consists of all ASCII characters we need a new string in which we extract only the alphanumeric characters without any spaces. Once, the modified string is obtained we use the two pointer method with one pointer pointing at the 0th element and another at the last element. Both pointers are converged towards the middle element with a condition that if the characters at both the pointer positions do not match then we return false. If the entire string is parsed without any violation we return true.

## Important Points

- Strings

- ASCII characters

- Text parsing