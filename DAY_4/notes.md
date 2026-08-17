# Day 4 — Searching and Sorting in C

## DSA with C

---

# 1. What is Searching?

Searching means finding whether a particular element exists in a data structure and, if it exists, finding its position.

Example:

Array:

10 20 30 40 50

Search:

30

Result:

30 is present at index 2.

---

# 2. Types of Searching

Two important searching techniques are:

1. Linear Search
2. Binary Search

---

# 3. Linear Search

Linear Search checks elements one by one from the beginning until the required element is found.

Example:

Array:

10 20 30 40 50

Search:

40

Process:

10 -> No
20 -> No
30 -> No
40 -> Found

---

# 4. Linear Search Algorithm

Step 1:

Start from index 0.

Step 2:

Compare current element with target.

Step 3:

If equal, return the index.

Step 4:

Otherwise move to the next element.

Step 5:

If the array ends, the element is not present.

---

# 5. Linear Search Complexity

Best Case:

O(1)

Worst Case:

O(n)

Average Case:

O(n)

Space:

O(1)

---

# 6. Binary Search

Binary Search is an efficient searching algorithm that works on a sorted array.

It repeatedly divides the search range into two halves.

---

# 7. Important Condition for Binary Search

The array must be sorted.

Example:

10 20 30 40 50

This array can be searched using Binary Search.

Unsorted array:

30 10 50 20 40

First sort it or use another suitable method.

---

# 8. Binary Search Variables

We generally use:

low

high

mid

Initially:

low = 0

high = n - 1

Middle:

mid = low + (high - low) / 2

---

# 9. Binary Search Logic

Suppose:

Array:

10 20 30 40 50 60 70

Target:

60

First middle element:

40

Since:

60 > 40

Ignore the left half.

Search the right half.

Continue until the target is found or the range becomes empty.

---

# 10. Binary Search Conditions

If:

arr[mid] == target

Element found.

If:

target < arr[mid]

Search left half.

If:

target > arr[mid]

Search right half.

---

# 11. Binary Search Complexity

Best Case:

O(1)

Worst Case:

O(log n)

Average Case:

O(log n)

Space for iterative version:

O(1)

---

# 12. Why Binary Search is Faster

Linear Search may check every element.

Binary Search eliminates half of the remaining search space after each comparison.

For large sorted arrays, this can be much faster.

---

# 13. Iterative Binary Search

Iterative Binary Search uses a loop.

General structure:

while (low <= high)

Calculate mid.

Compare target with arr[mid].

Update low or high.

---

# 14. Recursive Binary Search

Binary Search can also be implemented using recursion.

The function calls itself on either the left half or right half.

---

# 15. Recursive Binary Search Complexity

Time:

O(log n)

Recursive call stack:

O(log n)

---

# 16. First Occurrence

Suppose:

Array:

1 2 2 2 3 4

Target:

2

First occurrence:

Index 1

In Binary Search, after finding the target, continue searching toward the left.

---

# 17. Last Occurrence

For:

1 2 2 2 3 4

Target:

2

Last occurrence:

Index 3

After finding the target, continue searching toward the right.

---

# 18. Count Occurrences

Count can be calculated as:

last occurrence - first occurrence + 1

For a sorted array containing consecutive occurrences.

Example:

First = 1

Last = 3

Count:

3 - 1 + 1 = 3

---

# 19. Insertion Position

The insertion position is the position where a target can be inserted while maintaining sorted order.

Example:

Array:

10 20 30 40

Target:

25

Insertion position:

2

Because 25 should be placed between 20 and 30.

---

# 20. What is Sorting?

Sorting means arranging data in a particular order.

Common orders:

Ascending

Descending

---

# 21. Ascending Order

Ascending means smallest to largest.

Example:

5 2 4 1

After sorting:

1 2 4 5

---

# 22. Descending Order

Descending means largest to smallest.

Example:

5 2 4 1

After sorting:

5 4 2 1

---

# 23. Why is Sorting Important?

Sorting makes many operations easier.

Applications include:

- Searching
- Ranking
- Finding minimum
- Finding maximum
- Removing duplicates
- Data analysis
- Scheduling

---

# 24. Bubble Sort

Bubble Sort repeatedly compares adjacent elements.

If they are in the wrong order, they are swapped.

---

# 25. Bubble Sort Example

Array:

5 3 4 1

Compare:

5 and 3

Swap:

3 5 4 1

Compare:

5 and 4

Swap:

3 4 5 1

Continue until the largest element moves toward the end.

---

# 26. Bubble Sort Complexity

Worst Case:

O(n²)

Average Case:

O(n²)

Best Case with optimization:

O(n)

Space:

O(1)

---

# 27. Bubble Sort Optimization

If no swapping occurs during a complete pass, the array is already sorted.

We can use a flag:

swapped = 0

If a swap happens:

swapped = 1

If no swap happens:

break

This can improve the best case to O(n).

---

# 28. Selection Sort

Selection Sort repeatedly selects the smallest element from the unsorted part and places it at the correct position.

---

# 29. Selection Sort Example

Array:

5 3 4 1

Smallest:

1

Place it at the beginning.

Result:

1 3 4 5

Continue for remaining elements.

---

# 30. Selection Sort Complexity

Best:

O(n²)

Average:

O(n²)

Worst:

O(n²)

Space:

O(1)

---

# 31. Insertion Sort

Insertion Sort builds the sorted portion one element at a time.

It takes an element and inserts it into its correct position in the already sorted part.

---

# 32. Insertion Sort Example

Array:

5 3 4 1

Start:

5

Insert 3:

3 5

Insert 4:

3 4 5

Insert 1:

1 3 4 5

---

# 33. Insertion Sort Complexity

Best:

O(n)

Average:

O(n²)

Worst:

O(n²)

Space:

O(1)

---

# 34. Stable Sorting

A stable sorting algorithm preserves the relative order of equal elements.

Bubble Sort and Insertion Sort are commonly stable when implemented appropriately.

---

# 35. In-place Sorting

An in-place sorting algorithm uses only a small amount of additional memory apart from the input.

Examples:

Bubble Sort

Selection Sort

Insertion Sort

---

# 36. Comparison of Basic Algorithms

Linear Search:

Time = O(n)

Binary Search:

Time = O(log n)

Bubble Sort:

Worst = O(n²)

Selection Sort:

O(n²)

Insertion Sort:

Best = O(n)

Worst = O(n²)

---

# 37. Binary Search vs Linear Search

Linear Search:

- Works on sorted or unsorted arrays
- O(n) worst case
- Simple implementation

Binary Search:

- Requires sorted data
- O(log n) worst case
- More efficient for large sorted arrays

---

# 38. Bubble Sort vs Selection Sort

Bubble Sort:

- Compares adjacent elements
- Performs swaps when needed
- Can detect an already sorted array with optimization

Selection Sort:

- Selects minimum/maximum
- Places it in correct position
- Usually performs fewer swaps

---

# 39. Selection Sort vs Insertion Sort

Selection Sort:

- Repeatedly selects minimum
- O(n²) in best case

Insertion Sort:

- Inserts elements into sorted portion
- O(n) best case
- Good for small or nearly sorted arrays

---

# 40. Searching and Sorting Relationship

Sorting can make searching more efficient.

For example:

Unsorted data:

Linear Search may be required.

Sorted data:

Binary Search can be used.

---

# 41. Safe Mid Calculation

Instead of:

mid = (low + high) / 2

A safer common expression is:

mid = low + (high - low) / 2

This avoids potential integer overflow when low and high are very large.

---

# 42. Binary Search Invariant

At each iteration, the target, if present, must remain within the current search range.

The range is reduced after every comparison.

---

# 43. Common Binary Search Mistakes

1. Using Binary Search on an unsorted array.
2. Incorrect mid calculation.
3. Incorrect low/high update.
4. Forgetting the equality case.
5. Creating an infinite loop.
6. Using wrong boundary conditions.

---

# 44. Common Sorting Mistakes

1. Incorrect loop limits.
2. Incorrect swap logic.
3. Forgetting to update indexes.
4. Sorting only part of the array accidentally.
5. Confusing ascending and descending order.

---

# 45. Swap Logic

A common swap method:

int temp;

temp = a;

a = b;

b = temp;

---

# 46. Kth Smallest Element

The kth smallest element is the element that would appear at index k - 1 after sorting.

Example:

1 2 3 4 5

3rd smallest:

3

---

# 47. Kth Largest Element

The kth largest element is the element that would appear at position n - k after sorting in ascending order.

Example:

1 2 3 4 5

2nd largest:

4

---

# 48. Remove Duplicates from Sorted Array

In a sorted array, duplicates are adjacent.

Example:

1 1 2 2 3

Unique result:

1 2 3

---

# 49. Merge Sorted Arrays

Two sorted arrays can be merged into one sorted array.

A common technique uses two pointers.

Example:

A:

1 3 5

B:

2 4 6

Merged:

1 2 3 4 5 6

---

# 50. Day 4 Summary

Today I learned:

- Searching
- Linear Search
- Binary Search
- Recursive Binary Search
- First occurrence
- Last occurrence
- Frequency
- Insertion position
- Sorting
- Bubble Sort
- Optimized Bubble Sort
- Selection Sort
- Insertion Sort
- Ascending sorting
- Descending sorting
- Stable sorting
- In-place sorting
- Kth smallest
- Kth largest
- Merge sorted arrays
- Remove duplicates
- Time complexity
- Space complexity

---

# 51. Day 4 Learning Goal

By the end of Day 4, I should be able to:

1. Implement Linear Search.
2. Implement Binary Search.
3. Explain why Binary Search requires sorted data.
4. Implement recursive Binary Search.
5. Find first and last occurrence.
6. Implement Bubble Sort.
7. Optimize Bubble Sort.
8. Implement Selection Sort.
9. Implement Insertion Sort.
10. Compare searching and sorting algorithms.
11. Understand basic time and space complexity.