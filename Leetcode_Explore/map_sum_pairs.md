# Map Sum Pairs

## Problem

Implement a MapSum class with insert, and sum methods.

For the method insert, you'll be given a pair of (string, integer). The string represents the key and the integer represents the value. If the key already existed, then the original key-value pair will be overridden to the new one.

For the method sum, you'll be given a string representing the prefix, and you need to return the sum of all the pairs' value whose key starts with the prefix.

## Logic

The problem can be solved by two main approaches. The first being the use of a hashmap and the second using a prefix tree i.e., trie. Since a trie is much better placed to deal with prefixes we go with the trie approach which is the most efficient way to deal with the problem. For the insert() method, we first check whether the key has been already inserted in the trie or not. If the key has already been inserted we define a variable diff which is used to subtract from the trie nodes the previous value of the key. Subsequently, as we move through the trie nodes we keep adding the new value of the key into the sum of the nodes. The sum() method is rather straight forward where we return the sum of the final trie node or return 0 if the prefix does not exist.

## Important Points

- Trie

- Hashmap

- String prefix

