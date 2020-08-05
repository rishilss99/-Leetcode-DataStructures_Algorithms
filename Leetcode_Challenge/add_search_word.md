# Add and Search Word - Data structure design

## Problem

Design a data structure that supports the following two operations:

void addWord(word)
bool search(word)

search(word) can search a literal word or a regular expression string containing only letters a-z or .. A . means it can represent any one letter.

## Logic

One of the good problems solved using trie. The problem is a straight-off trie question but the increased difficulty is due to the use of the '.' character which can represent any alphabet. Since '.' can represent any alphabet and can be used multiple times in the string we have to use backtracking for testing multiple possible cases. To reduce the number of search operations when dealing with '.' an additional instance variable TrieNode->max is used which basically keeps a track of the maximum length of word that has been inserted from the node. So when searching incase the TrieNode->max < word.length() then we can straight off reject the possibility. Another important feature of this question is the use of unordered hashmap instead of an array of alphabets in the previous cases. This leads to complexities in programming but reduces the search time as we have to go over only the inserted memebers in the hashmap instead of all alphabets checking for NULL in case of an array.

## Important Points

- Trie

- String Parsing

- Hashmap

- Backtracking
