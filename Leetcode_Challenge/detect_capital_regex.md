# Detect Capital

## Problem

Given a word, you need to judge whether the usage of capitals in it is right or not.

We define the usage of capitals in a word to be right when one of the following cases holds:

All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital, like "Google".
Otherwise, we define that this word doesn't use capitals in a right way.

## Logic

Completely badass solution which introduces me to the concept of regular expressions which lies at the foundation of text editors and compilers. C++11 onwards there is in-built support for regex which can be readily be used for string and pattern matching tasks. Using the simple regex_match() funtion we are able to solve the problem. The important aspect however is the choosing of the appropriate regular expression to be passed as a parameter in the regex_match() function. Since, we know that there are only 3 cases where the string is true. The positive cases are : 1)[A-Z]\* 2)[a-z]\* 3)[A-Z]|[a-z]\*. This 3 cases can either be joined using or (|) but we can also combine into a single regular expression that is [A-Z]\*|.[a-z]\* where '.' represents any char.

## Important Points

- Regex

- Pattern matching