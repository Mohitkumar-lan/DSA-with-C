# Day 5 — Array Problem Solving in C

# DSA with C

---

## 1. Introduction

Day 5 focuses on solving important array-based DSA problems.

The main goal is not only to write code but also to learn how to identify patterns in problems.

Today we will learn:

- Two Pointer Technique
- Prefix Sum
- Subarrays
- Kadane's Algorithm
- Array Rotation
- Missing Number
- Duplicate Number
- Majority Element
- Array Partition
- Time Complexity
- Space Complexity

---

# 2. Problem-Solving Approach

Before writing code, follow these steps:

1. Understand the problem.
2. Identify input and output.
3. Try a simple/brute-force approach.
4. Analyze time complexity.
5. Look for an optimization.
6. Write the code.
7. Test edge cases.

---

# 3. Two Pointer Technique

Two Pointer is a technique where two indexes/pointers are used to process an array.

Common pointers:

left
right

Example:

Array:

1 2 3 4 5

left = 0

right = 4

---

# 4. Why Two Pointer Technique?

Two pointers can reduce unnecessary nested loops.

A problem that takes O(n²) using brute force may sometimes be solved in O(n).

---

# 5. Reverse an Array Using Two Pointers

Example:

1 2 3 4 5

Initially:

left = 0
right = 4

Swap:

1 and 5

Array:

5 2 3 4 1

Continue until:

left >= right

Final:

5 4 3 2 1

---

# 6. Complexity of Reversing

Time Complexity:

O(n)

Space Complexity:

O(1)

---

# 7. Pair Sum Problem

Suppose we have:

1 2 3 4 5

Target:

7

We need to find two elements whose sum is 7.

Possible pair:

2 + 5 = 7

3 + 4 = 7

---

# 8. Pair Sum Using Brute Force

Use two loops.

Time Complexity:

O(n²)

This checks every possible pair.

---

# 9. Pair Sum Using Two Pointers

If the array is sorted:

left = 0

right = n - 1

Calculate:

sum = arr[left] + arr[right]

If sum equals target:

Pair found.

If sum is smaller:

left++

If sum is larger:

right--

---

# 10. Two Pointer Pair Sum Complexity

Time:

O(n)

Space:

O(1)

This is much better than O(n²) for a sorted array.

---

# 11. Move Zeros

Problem:

Move all zeros to the end while maintaining the relative order of non-zero elements.

Example:

0 1 0 3 12

Output:

1 3 12 0 0

---

# 12. Remove Duplicates

For a sorted array:

1 1 2 2 3

Unique elements:

1 2 3

Two pointers can be used.

---

# 13. Remove Element

Given:

1 2 3 2 4

Remove:

2

Result:

1 3 4

The exact output representation depends on the problem requirements.

---

# 14. Second Largest Element

Example:

10 20 5 30 25

Largest:

30

Second Largest:

25

We can maintain:

largest

secondLargest

while traversing the array.

---

# 15. Missing Number

Suppose numbers from 1 to n should be present.

Example:

1 2 3 5

Missing:

4

One approach is to calculate the expected sum and subtract the actual sum.

Expected sum:

n * (n + 1) / 2

Missing:

expected - actual

---

# 16. Missing Number Using XOR

XOR has useful properties:

x ^ x = 0

x ^ 0 = x

Therefore, XOR can be used to cancel matching values.

This avoids possible integer-sum overflow in some situations.

---

# 17. Duplicate Number

Example:

1 2 3 2 4

Duplicate:

2

A simple approach is to compare each pair.

Time:

O(n²)

Other approaches can use frequency arrays, hashing, or specialized techniques depending on constraints.

---

# 18. Frequency of Elements

Frequency means the number of times an element occurs.

Example:

Array:

1 2 2 3 3 3

Frequency:

1 -> 1

2 -> 2

3 -> 3

---

# 19. Prefix Sum

Prefix Sum stores cumulative sums.

Example:

Array:

2 4 6 8

Prefix Sum:

2 6 12 20

---

# 20. Prefix Sum Formula

prefix[0] = arr[0]

For i > 0:

prefix[i] = prefix[i - 1] + arr[i]

---

# 21. Why Prefix Sum?

Prefix Sum allows repeated range-sum queries to be answered efficiently.

After preprocessing:

prefix[i] = sum from index 0 to i

---

# 22. Range Sum

Suppose:

Array:

2 4 6 8 10

Prefix:

2 6 12 20 30

Sum from index l to r:

If l == 0:

prefix[r]

Otherwise:

prefix[r] - prefix[l - 1]

---

# 23. Prefix Sum Complexity

Building prefix array:

O(n)

Each range sum query:

O(1)

This is useful when many range queries are required.

---

# 24. What is a Subarray?

A subarray is a contiguous part of an array.

Example:

Array:

1 2 3

Subarrays include:

1

2

3

1 2

2 3

1 2 3

---

# 25. Subsequence vs Subarray

Subarray:

Elements must be contiguous.

Subsequence:

Elements do not necessarily need to be contiguous, but their relative order is maintained.

Example:

Array:

1 2 3

1 3 is a subsequence.

But 1 3 is not a subarray.

---

# 26. Maximum Subarray Sum

The maximum subarray problem asks us to find the contiguous subarray having the maximum sum.

Example:

-2 1 -3 4 -1 2 1 -5 4

Maximum sum:

6

Subarray:

4 -1 2 1

---

# 27. Kadane's Algorithm

Kadane's Algorithm solves the maximum subarray sum problem in O(n) time.

Maintain:

currentSum

maxSum

---

# 28. Kadane's Logic

For each element:

currentSum = currentSum + arr[i]

If currentSum becomes smaller than starting a new subarray from arr[i]:

currentSum = arr[i]

Update:

maxSum = max(maxSum, currentSum)

---

# 29. Kadane's Algorithm Complexity

Time:

O(n)

Space:

O(1)

---

# 30. Brute Force Maximum Subarray

A brute-force solution can use nested loops.

Time Complexity:

O(n²)

Kadane's Algorithm improves this to:

O(n)

---

# 31. Majority Element

A majority element is an element that appears more than n/2 times.

Example:

2 2 1 1 1 2 2

2 appears 4 times.

n = 7

n/2 = 3

Therefore, 2 is the majority element.

---

# 32. Boyer-Moore Voting Algorithm

The Boyer-Moore Voting Algorithm can find a majority element in:

Time:

O(n)

Space:

O(1)

The basic idea is to maintain a candidate and a count.

---

# 33. Array Rotation

Rotation means moving elements from one side of the array to the other.

Example:

1 2 3 4 5

Left rotate by 2:

3 4 5 1 2

---

# 34. Right Rotation

Example:

1 2 3 4 5

Right rotate by 2:

4 5 1 2 3

---

# 35. Array Partition

Partition means rearranging elements according to a condition.

Example:

Move negative values before positive values.

Input:

1 -2 3 -4 5

Possible output:

-2 -4 1 3 5

The exact order depends on the algorithm used.

---

# 36. Even-Odd Partition

We can rearrange an array so that even numbers appear before odd numbers.

Example:

1 2 3 4 5 6

Possible result:

2 4 6 1 3 5

---

# 37. Union of Arrays

Union contains elements that occur in either of the two arrays.

Example:

A:

1 2 3

B:

2 3 4

Union:

1 2 3 4

---

# 38. Intersection of Arrays

Intersection contains elements common to both arrays.

Example:

A:

1 2 3

B:

2 3 4

Intersection:

2 3

---

# 39. Maximum Difference

Maximum difference can mean:

arr[j] - arr[i]

where:

j > i

We want the maximum possible difference.

Efficient approach:

Maintain the minimum value seen so far.

For each element:

difference = arr[i] - minimum

Update maximum difference.

Time:

O(n)

---

# 40. Brute Force vs Optimized Approach

Brute Force:

Usually tries all possible combinations.

It is easier to understand but may be slow.

Optimized Approach:

Uses a suitable pattern or data structure to reduce unnecessary work.

---

# 41. Common Array Patterns

Important patterns:

1. Two Pointers
2. Sliding Window
3. Prefix Sum
4. Frequency Counting
5. Kadane's Algorithm
6. Sorting + Searching
7. In-place Modification

---

# 42. Two Pointer vs Sliding Window

Two Pointer generally uses two indexes to process a range or pair.

Sliding Window maintains a dynamic contiguous range.

Both can reduce unnecessary repeated work.

---

# 43. Edge Cases

Always consider:

- Empty array
- One element
- Two elements
- Duplicate values
- Negative values
- All positive values
- All negative values
- Already sorted array
- Reverse sorted array

---

# 44. Time Complexity

Common complexities:

O(1)

O(log n)

O(n)

O(n log n)

O(n²)

---

# 45. Space Complexity

Space complexity measures additional memory used by an algorithm.

Example:

Reversing an array using two pointers:

O(1)

Creating another array:

O(n)

---

# 46. In-Place Algorithm

An in-place algorithm modifies the original data structure using little additional memory.

Example:

Two-pointer array reversal.

---

# 47. Why Complexity Matters

Two algorithms may produce the same output but have different performance.

Example:

Algorithm A:

O(n²)

Algorithm B:

O(n)

For a large input, O(n) is generally much more scalable.

---

# 48. Day 5 Important Concepts

Today we learned:

- Two Pointer
- Pair Sum
- Reverse Array
- Move Zeros
- Remove Duplicates
- Missing Number
- Duplicate Number
- Frequency
- Prefix Sum
- Range Sum
- Subarray
- Maximum Subarray
- Kadane's Algorithm
- Majority Element
- Array Rotation
- Union
- Intersection
- Maximum Difference
- Time Complexity
- Space Complexity

---

# 49. Day 5 Goal

After completing Day 5, I should be able to:

1. Identify common array patterns.
2. Use two pointers.
3. Reverse an array efficiently.
4. Solve pair-sum problems.
5. Use prefix sums.
6. Calculate range sums.
7. Understand subarrays.
8. Implement Kadane's Algorithm.
9. Find majority elements.
10. Rotate arrays.
11. Find missing and duplicate elements.
12. Analyze time and space complexity.