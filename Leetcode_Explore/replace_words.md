# Replace Words

## Problem

In English, we have a concept called root, which can be followed by some other words to form another longer word - let's call this word successor. For example, the root an, followed by other, which can form another word another.

Now, given a dictionary consisting of many roots and a sentence. You need to replace all the successor in the sentence with the root forming it. If a successor has many roots can form it, replace it with the root with the shortest length.

You need to output the sentence after the replacement.

## Logic

This problem is a really good example of the wide ranging applications of trie related to string related problems and the efficient time complexity of the approach. This problem can be solved within the time frame by only two approaches. The first one being the prefix hashmap approach and the second the trie approach. The trie approach has a better time complexity of O(n) but a complex implementation. Just like previous trie problems we begin by making the TrieNode class and then including the insertion() and search() methods in the solution class. We insert each element from the dictionary into the trie first of all. Then we parse the given sentence using stringstream during which we search for the root of each word in the trie. In case a complete root is found for the successor in the trie we replace the word with the root in the final result variable. In case the search returns false we continue with the parsing.

## Important Points

- Trie

- String Manipulation

- String stream