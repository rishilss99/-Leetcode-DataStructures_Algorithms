# Minimum Index Sum of Two Lists

## Problem

Suppose Andy and Doris want to choose a restaurant for dinner, and they both have a list of favorite restaurants represented by strings.

You need to help them find out their common interest with the least list index sum. If there is a choice tie between answers, output all of them with no order requirement. You could assume there always exists an answer.

## Logic

Using hash tables provides the most time efficient solution to the given problem. We start by inserting all elements from list1 into the hashmap with their indices as the value and the string as the key. Along with that we also insert the keys from list1 into a hashset. Next as we go over list2 we sum the indices of common elements that are present in list2 and simultaneously also find the minimum sum of indices. While iterating over list2 we also remove elements that are not repeated in list2. Finally we are left with a hashmap of all elements from list1 with the corresponding indices sum and a hashset that contains the elements from list1 that are not present in list2. Hence, we simply insert the strings from the hashmap to the vector which are not present in the hashset and have a value equal to the calculated minimum sum of indices.

## Important Points

- Hash map

- Hash set
