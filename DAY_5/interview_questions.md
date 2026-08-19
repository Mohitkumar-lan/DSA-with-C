# Day 5 — Array Problem Solving
# Interview Questions and Answers

## Q1. What is the Two Pointer Technique?

Answer:

Two Pointer is a technique where two indexes are used to process an array efficiently.

Common pointers are:

left
right

---

## Q2. Why is Two Pointer Technique useful?

Answer:

It can reduce unnecessary comparisons and can sometimes reduce an O(n²) solution to O(n).

---

## Q3. How do you reverse an array using two pointers?

Answer:

Set:

left = 0

right = n - 1

Swap arr[left] and arr[right].

Then:

left++

right--

Continue until left >= right.

---

## Q4. What is the complexity of reversing an array using two pointers?

Answer:

Time Complexity:

O(n)

Space Complexity:

O(1)

---

## Q5. What is the Pair Sum problem?

Answer:

Given an array and a target value, we need to find two elements whose sum is equal to the target.

Example:

Array:

1 2 3 4 5

Target:

7

Possible pair:

2 + 5 = 7

---

## Q6. How can Pair Sum be optimized using Two Pointers?

Answer:

If the array is sorted:

1. Set left = 0.
2. Set right = n - 1.
3. Calculate arr[left] + arr[right].
4. If sum equals target, pair is found.
5. If sum is smaller, increment left.
6. If sum is larger, decrement right.

Time Complexity:

O(n)

---

## Q7. What is Prefix Sum?

Answer:

Prefix Sum stores the cumulative sum of elements from the beginning of the array up to each index.

Example:

Array:

2 4 6 8

Prefix:

2 6 12 20

---

## Q8. What is the advantage of Prefix Sum?

Answer:

Prefix Sum allows repeated range-sum queries to be answered in O(1) time after O(n) preprocessing.

---

## Q9. How do you calculate range sum using Prefix Sum?

Answer:

If l = 0:

sum = prefix[r]

Otherwise:

sum = prefix[r] - prefix[l - 1]

---

## Q10. What is a subarray?

Answer:

A subarray is a contiguous part of an array.

Example:

Array:

1 2 3

[1,2] is a subarray.

---

## Q11. Difference between subarray and subsequence?

Answer:

Subarray:

Elements must be contiguous.

Subsequence:

Elements do not have to be contiguous, but their relative order is maintained.

---

## Q12. What is Kadane's Algorithm?

Answer:

Kadane's Algorithm is an efficient algorithm used to find the maximum sum of a contiguous subarray.

---

## Q13. What is the time complexity of Kadane's Algorithm?

Answer:

Time Complexity:

O(n)

Space Complexity:

O(1)

---

## Q14. How does Kadane's Algorithm work?

Answer:

It maintains two values:

currentSum

maxSum

For each element, it decides whether to:

1. Extend the current subarray.
2. Start a new subarray.

Then it updates maxSum.

---

## Q15. What is the brute-force complexity for Maximum Subarray Sum?

Answer:

A simple nested-loop approach can take:

O(n²)

Kadane's Algorithm improves it to:

O(n)

---

## Q16. What is a majority element?

Answer:

A majority element is an element that occurs more than n/2 times in an array.

---

## Q17. Which algorithm can find a majority element in O(n) time and O(1) extra space?

Answer:

Boyer-Moore Voting Algorithm.

---

## Q18. What is the basic idea of Boyer-Moore Voting Algorithm?

Answer:

Maintain a candidate and a count.

If the current element equals the candidate, increase count.

Otherwise decrease count.

When count becomes zero, select the current element as the new candidate.

A final verification is needed if the problem does not guarantee that a majority element exists.

---

## Q19. How can you find a missing number?

Answer:

If the numbers are from 1 to n and exactly one number is missing, calculate:

Expected Sum = n * (n + 1) / 2

Then:

Missing = Expected Sum - Actual Sum

---

## Q20. What is another way to find a missing number?

Answer:

XOR can be used.

Because:

x ^ x = 0

and:

x ^ 0 = x

Matching values cancel each other.

---

## Q21. What is the Move Zeros problem?

Answer:

The task is to move all zero values to the end while generally preserving the relative order of non-zero elements.

Example:

0 1 0 3 12

Output:

1 3 12 0 0

---

## Q22. How can Move Zeros be solved efficiently?

Answer:

Maintain a position pointer.

Traverse the array.

Whenever a non-zero element is found, place it at the current position.

After all non-zero elements are placed, fill the remaining positions with zero.

Time:

O(n)

Extra Space:

O(1)

---

## Q23. What is array rotation?

Answer:

Array rotation means shifting elements from one side of the array to another.

Example:

1 2 3 4 5

Left rotate by 2:

3 4 5 1 2

---

## Q24. What is left rotation?

Answer:

In left rotation, elements from the beginning move toward the end.

Example:

1 2 3 4 5

Left rotate by 1:

2 3 4 5 1

---

## Q25. What is right rotation?

Answer:

In right rotation, elements from the end move toward the beginning.

Example:

1 2 3 4 5

Right rotate by 1:

5 1 2 3 4

---

## Q26. What is the Two Pointer approach for partitioning an array?

Answer:

Use one pointer from the left and another from the right.

Move each pointer until an element violating the desired condition is found.

Swap those elements.

Continue until the pointers meet.

---

## Q27. What is an in-place array algorithm?

Answer:

An in-place algorithm modifies the original array while using only a small amount of additional memory.

Example:

Two-pointer array reversal.

---

## Q28. What is the difference between O(n) and O(n²)?

Answer:

O(n) grows linearly with input size.

O(n²) grows quadratically.

For large inputs, O(n) is generally much more efficient than O(n²).

---

## Q29. What are common array problem-solving patterns?

Answer:

Important patterns include:

- Two Pointers
- Prefix Sum
- Sliding Window
- Frequency Counting
- Kadane's Algorithm
- Sorting + Searching
- In-place Modification

---

## Q30. How do you approach an unknown array problem in an interview?

Answer:

Follow these steps:

1. Understand the problem.
2. Clarify input and output.
3. Think of a brute-force solution.
4. Calculate its complexity.
5. Look for a better pattern.
6. Consider edge cases.
7. Write clean code.
8. Test with examples.
9. Explain time and space complexity.

---

## Q31. What edge cases should be checked in array problems?

Answer:

Important edge cases include:

- Empty array
- One element
- Two elements
- Duplicate elements
- Negative numbers
- All positive numbers
- All negative numbers
- Already sorted array
- Reverse sorted array

---

## Q32. What is maximum difference in an array?

Answer:

It commonly means finding the maximum value of:

arr[j] - arr[i]

where j > i.

An efficient solution maintains the minimum value seen so far.

---

## Q33. What is the complexity of finding maximum difference using the optimized approach?

Answer:

Time:

O(n)

Space:

O(1)

---

## Q34. How can duplicates be removed from an array?

Answer:

For a sorted array, a two-pointer technique can remove duplicates in O(n).

For an unsorted array, approaches such as sorting, frequency counting, or hashing can be used depending on the constraints.

---

## Q35. Why is pattern recognition important in DSA?

Answer:

Pattern recognition helps identify efficient approaches.

For example:

Pair problems -> Two Pointers

Range Sum -> Prefix Sum

Maximum Subarray -> Kadane's Algorithm

Frequency problems -> Frequency Counting

This helps reduce unnecessary brute-force solutions.

---

# Quick Revision

Two Pointer:

Useful for pair and partition problems.

Prefix Sum:

Useful for range-sum queries.

Kadane:

Maximum subarray sum.

Boyer-Moore:

Majority element.

Rotation:

Moves elements left or right.

Missing Number:

Sum or XOR.

Move Zeros:

Two-pointer/in-place approach.

---

# Most Important Interview Questions

1. Explain Two Pointer Technique.
2. Solve Pair Sum using Two Pointers.
3. Explain Prefix Sum.
4. Solve range sum using Prefix Sum.
5. What is a subarray?
6. Subarray vs subsequence.
7. Explain Kadane's Algorithm.
8. Complexity of Kadane's Algorithm.
9. Explain Majority Element.
10. Explain Boyer-Moore Voting Algorithm.
11. Find Missing Number.
12. Move Zeros to the end.
13. Explain Array Rotation.
14. Explain in-place algorithm.
15. Explain common array problem-solving patterns.