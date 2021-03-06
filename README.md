# LeetCode

LeetCode Problems' Solutions

## Table of Contents

<!-- vim-markdown-toc GFM -->

* [Problems](#problems)
    * [Algorithms](#algorithms)
    * [Database](#database)
    * [Shell](#shell)
* [Notes](#notes)
    * [Frequently used formulas](#frequently-used-formulas)
    * [Tips](#tips)
* [Notice](#notice)

<!-- vim-markdown-toc -->

## Problems

### Algorithms

| #    | Title                                                 | Solution        | Difficulty |
|------|-------------------------------------------------------|-----------------|------------|
| 1    | [Two Sum][1]                                          | [C++][1.cpp]    | Easy       |
| 13   | [Roman to Integer][13]                                | [C++][13.cpp]   | Easy       |
| 21   | [Merge Two Sorted Lists][21]                          | [C++][21.cpp]   | Easy       |
| 24   | [Swap Nodes in Pairs][24]                             | [C++][24.cpp]   | Easy       |
| 70   | [Climbing Stairs][70]                                 | [C++][70.cpp]   | Easy       |
| 83   | [Remove Duplicates from Sorted List][83]              | [C++][83.cpp]   | Easy       |
| 100  | [Same Tree][100]                                      | [C++][100.cpp]  | Easy       |
| 104  | [Maximum Depth of Binary Tree][104]                   | [C++][104.cpp]  | Easy       |
| 136  | [Single Number][136]                                  | [C++][136.cpp]  | Medium     |
| 169  | [Majority Element][169]                               | [C++][169.cpp]  | Easy       |
| 171  | [Excel Sheet Column Number][171]                      | [C++][171.cpp]  | Easy       |
| 191  | [Number of 1 Bits][191]                               | [C++][191.cpp]  | Easy       |
| 202  | [Happy Number][202]                                   | [C++][202.cpp]  | Easy       |
| 206  | [Reverse Linked List][206]                            | [C++][206.cpp]  | Easy       |
| 217  | [Contains Duplicate][217]                             | [C++][217.cpp]  | Easy       |
| 226  | [Invert Binary Tree][226]                             | [C++][226.cpp]  | Easy       |
| 231  | [Power of Two][231]                                   | [C++][231.cpp]  | Easy       |
| 232  | [Implement Queue using Stacks][232]                   | [C++][232.cpp]  | Easy       |
| 235  | [Lowest Common Ancestor of a Binary Search Tree][235] | [C++][235.cpp]  | Easy       |
| 237  | [Delete Node in a Linked List][237]                   | [C++][237.cpp]  | Easy       |
| 242  | [Valid Anagram][242]                                  | [C++][242.cpp]  | Easy       |
| 258  | [Add Digits][258]                                     | [C++][258.cpp]  | Easy       |
| 263  | [Ugly Number][263]                                    | [C++][263.cpp]  | Easy       |
| 283  | [Move Zeroes][283]                                    | [C++][283.cpp]  | Easy       |
| 292  | [Nim Game][292]                                       | [C++][292.cpp]  | Easy       |
| 299  | [Bulls and Cows][299]                                 | [C++][299.cpp]  | Easy       |
| 326  | [Power of Three][326]                                 | [C++][326.cpp]  | Easy       |
| 328  | [Odd Even Linked List][328]                           | [C++][328.cpp]  | Easy       |
| 344  | [Reverse String][344]                                 | [C++][344.cpp]  | Easy       |
| 371  | [Sum of Two Integers][371]                            | [C++][371.cpp]  | Easy       |
| 389  | [Find the Difference][389]                            | [C++][389.cpp]  | Easy       |
| 412  | [Fizz Buzz][412]                                      | [C++][412.cpp]  | Easy       |
| 455  | [Assign Cookies][455]                                 | [C++][455.cpp]  | Easy       |
| 461  | [Hamming Distance][461]                               | [C++][461.cpp]  | Easy       |
| 463  | [Island Perimeter][463]                               | [C++][463.cpp]  | Easy       |
| 476  | [Number Complement][476]                              | [C++][476.cpp]  | Easy       |
| 561  | [Array Partition I][561]                              | [C++][561.cpp]  | Easy       |
| 617  | [Merge Two Binary Trees][617]                         | [C++][617.cpp]  | Easy       |
| 657  | [Judge Route Circle][657]                             | [C++][657.cpp]  | Easy       |
| 709  | [To Lower Case][709]                                  | [C++][709.cpp]  | Easy       |
| 771  | [Jewels and Stones][771]                              | [C++][771.cpp]  | Easy       |
| 1021 | [Remove Outermost Parentheses][1021]                  | [C++][1021.cpp] | Easy       |

### Database

| #   | Title                    | Solution           | Difficulty |
|-----|--------------------------|--------------------|------------|
| 595 | [Big Countries][595]     | [MySQL][595.mysql] | Easy       |
| 620 | [Not Boring Movies][620] | [MySQL][620.mysql] | Easy       |
| 627 | [Swap Salary][627]       | [MySQL][627.mysql] | Easy       |

### Shell

## Notes

### Frequently used formulas

1. `a ^ b ^ b = a`

2. `a + b = (a ^ b) + ((a & b) << 1)`

### Tips

1. Remove the last `1` from binary number:

    ```cpp
    a = a & (a - 1);
    ```

## Notice

The C++ test suite Catch2 needs c++1x, so when build test.cpp, don't forget to add `-std=c++17` to the commandline.

[1]: https://leetcode.com/problems/two-sum/
[1.cpp]: ./algorithms/cpp/twoSum/solution.h
[13]: https://leetcode.com/problems/roman-to-integer/
[13.cpp]: ./algorithms/cpp/romanToInteger/solution.h
[21]: https://leetcode.com/problems/merge-two-sorted-lists/
[21.cpp]: ./algorithms/cpp/mergeTwoSortedLists/solution.h
[24]: https://leetcode.com/problems/swap-nodes-in-pairs
[24.cpp]: ./algorithms/cpp/swapNodesInPairs/solution.h
[70]: https://leetcode.com/problems/climbing-stairs/
[70.cpp]: ./algorithms/cpp/climbingStairs/solution.h
[83]: https://leetcode.com/problems/remove-duplicates-from-sorted-list/
[83.cpp]: ./algorithms/cpp/removeDuplicatesFromSortedList/solution.h
[100]: https://leetcode.com/problems/same-tree/
[100.cpp]: ./algorithms/cpp/sameTree/solution.h
[104]: https://leetcode.com/problems/maximum-depth-of-binary-tree/
[104.cpp]: ./algorithms/cpp/maximumDepthOfBinaryTree/solution.h
[136]: https://leetcode.com/problems/single-number/
[136.cpp]: ./algorithms/cpp/singleNumber/solution.h
[169]: https://leetcode.com/problems/majority-element/
[169.cpp]: ./algorithms/cpp/majorityElement/solution.h
[171]: https://leetcode.com/problems/excel-sheet-column-number/
[171.cpp]: ./algorithms/cpp/excelSheetColumnNumber/solution.h
[191]: https://leetcode.com/problems/number-of-1-bits/
[191.cpp]: ./algorithms/cpp/numberOf1Bits/solution.h
[202]: https://leetcode.com/problems/happy-number/
[202.cpp]: ./algorithms/cpp/happyNumber/solution.h
[206]: https://leetcode.com/problems/reverse-linked-list/
[206.cpp]: ./algorithms/cpp/reverseLinkedList/solution.h
[217]: https://leetcode.com/problems/contains-duplicate/
[217.cpp]: ./algorithms/cpp/containsDuplicate/solution.h
[226]: https://leetcode.com/problems/invert-binary-tree/
[226.cpp]: ./algorithms/cpp/invertBinaryTree/solution.h
[231]: https://leetcode.com/problems/power-of-two/
[231.cpp]: ./algorithms/cpp/powerOfTwo/solution2.h
[232]: https://leetcode.com/problems/implement-queue-using-stacks/
[232.cpp]: ./algorithms/cpp/implementQueueUsingStacks/solution.h
[235]: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
[235.cpp]: ./algorithms/cpp/lowestCommonAncestorOfABinarySearchTree/solution.h
[237]: https://leetcode.com/problems/delete-node-in-a-linked-list/
[237.cpp]: ./algorithms/cpp/deleteNodeInALinkedList/solution.h
[242]: https://leetcode.com/problems/valid-anagram/
[242.cpp]: ./algorithms/cpp/validAnagram/solution.h
[258]: https://leetcode.com/problems/add-digits/
[258.cpp]: ./algorithms/cpp/addDigits/solution.h
[263]: https://leetcode.com/problems/ugly-number/
[263.cpp]: ./algorithms/cpp/uglyNumber/solution.h
[283]: https://leetcode.com/problems/move-zeroes/
[283.cpp]: ./algorithms/cpp/moveZeroes/solution.h
[292]: https://leetcode.com/problems/nim-game/
[292.cpp]: ./algorithms/cpp/nimGame/solution.h
[299]: https://leetcode.com/problems/bulls-and-cows/
[299.cpp]: ./algorithms/cpp/bullsAndCows/solution.h
[326]: https://leetcode.com/problems/power-of-three/
[326.cpp]: ./algorithms/cpp/powerOfThree/solution2.h
[328]: https://leetcode.com/problems/odd-even-linked-list/
[328.cpp]: ./algorithms/cpp/oddEvenLinkedList/solution.h
[344]: https://leetcode.com/problems/reverse-string/
[344.cpp]: ./algorithms/cpp/reverseString/solution.h
[371]: https://leetcode.com/problems/sum-of-two-integers/
[371.cpp]: ./algorithms/cpp/sumOfTwoIntegers/solution.h
[389]: https://leetcode.com/problems/find-the-difference/
[389.cpp]: ./algorithms/cpp/findTheDifference/solution.h
[412]: https://leetcode.com/problems/fizz-buzz
[412.cpp]: ./algorithms/cpp/fizzBuzz/solution.h
[455]: https://leetcode.com/problems/assign-cookies/
[455.cpp]: ./algorithms/cpp/assignCookies/solution.h
[461]: https://leetcode.com/problems/hamming-distance/
[461.cpp]: ./algorithms/cpp/hammingDistance/solution.h
[463]: https://leetcode.com/problems/island-perimeter/
[463.cpp]: ./algorithms/cpp/islandPerimeter/solution.h
[476]: https://leetcode.com/problems/number-complement/
[476.cpp]: ./algorithms/cpp/numberComplement/solution.h
[561]: https://leetcode.com/problems/array-partition-i/
[561.cpp]: ./algorithms/cpp/arrayPartitionI/solution.h
[595]: https://leetcode.com/problems/big-countries/
[595.mysql]: ./database/mysql/bigCountries/README.md
[617]: https://leetcode.com/problems/merge-two-binary-trees/
[617.cpp]: ./algorithms/cpp/mergeTwoBinaryTrees/solution.h
[620]: https://leetcode.com/problems/not-boring-movies/
[620.mysql]: ./database/mysql/notBoringMovies/README.md
[627]: https://leetcode.com/problems/swap-salary/
[627.mysql]: ./database/mysql/swapSalary/README.md
[657]: https://leetcode.com/problems/judge-route-circle/
[657.cpp]: ./algorithms/cpp/judgeRouteCircle/solution.h
[709]: https://leetcode.com/problems/to-lower-case/
[709.cpp]: ./algorithms/cpp/toLowerCase/solution.h
[771]: https://leetcode.com/problems/jewels-and-stones/
[771.cpp]: ./algorithms/cpp/jewelsAndStones/solution.h
[1021]: https://leetcode.com/problems/remove-outermost-parentheses/
[1021.cpp]: ./algorithms/cpp/removeOutermostParentheses/solution.h
