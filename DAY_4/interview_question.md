# Day 4 — Searching and Sorting
# Interview Questions and Answers

## Q1. What is searching?

Answer:

Searching is the process of finding a particular element in a data structure.

Example:

If an array contains:

10 20 30 40 50

and we search for 30, then 30 is found at index 2.

---

## Q2. What is Linear Search?

Answer:

Linear Search checks every element one by one until the required element is found or the array ends.

Example:

10 20 30 40 50

Search = 40

The algorithm checks:

10 -> 20 -> 30 -> 40

40 is found.

---

## Q3. What is the time complexity of Linear Search?

Answer:

Best Case:

O(1)

Average Case:

O(n)

Worst Case:

O(n)

Space Complexity:

O(1)

---

## Q4. When should we use Linear Search?

Answer:

Linear Search is useful when:

1. The array is unsorted.
2. The dataset is small.
3. Simplicity is more important than search speed.

---

## Q5. What is Binary Search?

Answer:

Binary Search is an efficient searching algorithm that repeatedly divides a sorted array into two halves.

It compares the target with the middle element and eliminates one half of the search space.

---

## Q6. What is the main requirement of Binary Search?

Answer:

The array must be sorted.

For example:

10 20 30 40 50

Binary Search can be applied directly.

---

## Q7. What is the time complexity of Binary Search?

Answer:

Best Case:

O(1)

Average Case:

O(log n)

Worst Case:

O(log n)

---

## Q8. Why is Binary Search faster than Linear Search?

Answer:

Linear Search may check every element.

Binary Search eliminates approximately half of the remaining elements after every comparison.

Therefore, Binary Search has O(log n) time complexity on sorted data.

---

## Q9. What are low, high and mid in Binary Search?

Answer:

low represents the beginning of the current search range.

high represents the end of the current search range.

mid represents the middle index.

Example:

low = 0

high = n - 1

mid = low + (high - low) / 2

---

## Q10. What is the initial value of low?

Answer:

The initial value of low is:

low = 0

because C array indexing starts from 0.

---

## Q11. What is the initial value of high?

Answer:

For an array containing n elements:

high = n - 1

because the last valid index is n - 1.

---

## Q12. What is the condition of the Binary Search loop?

Answer:

The common condition is:

while (low <= high)

The search continues while a valid search range exists.

---

## Q13. What happens when arr[mid] == key?

Answer:

The target has been found.

We can return mid.

Example:

if (arr[mid] == key)
{
    return mid;
}

---

## Q14. What happens when key < arr[mid]?

Answer:

For an ascending sorted array, the target must be in the left half.

Therefore:

high = mid - 1;

---

## Q15. What happens when key > arr[mid]?

Answer:

For an ascending sorted array, the target must be in the right half.

Therefore:

low = mid + 1;

---

## Q16. What is the safe way to calculate mid?

Answer:

Use:

mid = low + (high - low) / 2;

instead of:

mid = (low + high) / 2;

The first form avoids potential integer overflow when the indexes are very large.

---

## Q17. Can Binary Search be implemented using recursion?

Answer:

Yes.

Binary Search can be implemented using:

1. Iteration
2. Recursion

The recursive version calls itself on the left or right half of the array.

---

## Q18. What is the space complexity of iterative Binary Search?

Answer:

The auxiliary space complexity is:

O(1)

because it uses only a few variables such as low, high and mid.

---

## Q19. What is the space complexity of recursive Binary Search?

Answer:

Typically:

O(log n)

because recursive function calls use the call stack.

---

## Q20. What is sorting?

Answer:

Sorting is the process of arranging elements in a particular order.

The two common orders are:

1. Ascending
2. Descending

---

## Q21. What is ascending order?

Answer:

Ascending order means arranging elements from smallest to largest.

Example:

5 2 4 1

After sorting:

1 2 4 5

---

## Q22. What is descending order?

Answer:

Descending order means arranging elements from largest to smallest.

Example:

5 2 4 1

After sorting:

5 4 2 1

---

## Q23. What is Bubble Sort?

Answer:

Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order.

After each pass, an element reaches its correct position.

---

## Q24. What is the worst-case time complexity of Bubble Sort?

Answer:

The worst-case time complexity is:

O(n²)

---

## Q25. What is the best-case time complexity of optimized Bubble Sort?

Answer:

The best-case time complexity is:

O(n)

when the array is already sorted.

This is possible because we stop if no swapping occurs during a complete pass.

---

## Q26. How can Bubble Sort be optimized?

Answer:

We can use a swapped flag.

Example:

int swapped = 0;

Whenever a swap happens:

swapped = 1;

If no swap occurs:

if (!swapped)
    break;

This avoids unnecessary passes for an already sorted array.

---

## Q27. What is Selection Sort?

Answer:

Selection Sort repeatedly finds the minimum element from the unsorted part and places it at the beginning of that unsorted part.

For descending order, we can select the maximum element instead.

---

## Q28. What is the time complexity of Selection Sort?

Answer:

Best Case:

O(n²)

Average Case:

O(n²)

Worst Case:

O(n²)

Space Complexity:

O(1)

---

## Q29. What is Insertion Sort?

Answer:

Insertion Sort builds a sorted portion of the array one element at a time.

Each new element is inserted into its correct position in the sorted portion.

---

## Q30. What is the best-case complexity of Insertion Sort?

Answer:

The best-case time complexity is:

O(n)

This happens when the array is already sorted or nearly sorted in the required order.

---

## Q31. What is the worst-case complexity of Insertion Sort?

Answer:

The worst-case time complexity is:

O(n²)

This can happen when the array is sorted in the reverse order.

---

## Q32. Which sorting algorithm is good for nearly sorted data?

Answer:

Insertion Sort is often a good choice for nearly sorted data because it can perform close to O(n) when only a small number of elements are out of place.

---

## Q33. What is a stable sorting algorithm?

Answer:

A stable sorting algorithm preserves the relative order of equal elements.

For example, if two records have the same key, their original relative order remains unchanged after sorting.

---

## Q34. Is Bubble Sort stable?

Answer:

Yes.

Standard Bubble Sort can be stable when it swaps only when the left element is greater than the right element.

---

## Q35. Is Insertion Sort stable?

Answer:

Yes.

Standard Insertion Sort is stable when equal elements are not moved past each other.

---

## Q36. Is Selection Sort stable?

Answer:

The standard in-place Selection Sort is generally not stable.

It can change the relative order of equal elements because of swaps.

---

## Q37. What is an in-place sorting algorithm?

Answer:

An in-place sorting algorithm uses only a small amount of additional memory apart from the input array.

Examples:

- Bubble Sort
- Selection Sort
- Insertion Sort

---

## Q38. What is the difference between Linear Search and Binary Search?

Answer:

Linear Search:

- Works on sorted and unsorted arrays.
- Worst case is O(n).
- Simple to implement.

Binary Search:

- Requires sorted data.
- Worst case is O(log n).
- Faster for large sorted arrays.

---

## Q39. What is the difference between Bubble Sort and Selection Sort?

Answer:

Bubble Sort compares adjacent elements and swaps them when necessary.

Selection Sort finds the minimum or maximum element and places it at the correct position.

Both have O(n²) worst-case time complexity.

---

## Q40. What is the difference between Selection Sort and Insertion Sort?

Answer:

Selection Sort repeatedly selects the minimum or maximum element.

Insertion Sort inserts each element into the correct position of the sorted portion.

Insertion Sort performs better on nearly sorted data.

---

## Q41. What is the first occurrence of an element?

Answer:

The first occurrence is the smallest index at which the target element appears.

Example:

Array:

1 2 2 2 5

Target:

2

First occurrence:

Index 1

---

## Q42. What is the last occurrence of an element?

Answer:

The last occurrence is the largest index at which the target element appears.

Example:

Array:

1 2 2 2 5

Target:

2

Last occurrence:

Index 3

---

## Q43. How do you find the first occurrence using Binary Search?

Answer:

When the target is found, store the index as the answer and continue searching toward the left.

Example:

answer = mid;

high = mid - 1;

This allows us to find an earlier occurrence.

---

## Q44. How do you find the last occurrence using Binary Search?

Answer:

When the target is found, store the index as the answer and continue searching toward the right.

Example:

answer = mid;

low = mid + 1;

---

## Q45. How do you count occurrences of an element in a sorted array?

Answer:

Find the first occurrence and last occurrence.

Then:

count = last - first + 1

Example:

First = 2

Last = 5

Count:

5 - 2 + 1 = 4

---

## Q46. What is the search insertion position?

Answer:

It is the index where an element should be inserted so that the array remains sorted.

Example:

Array:

10 20 30 40

Target:

25

Insertion position:

2

---

## Q47. How can you find the kth smallest element?

Answer:

One simple approach is:

1. Sort the array.
2. Return arr[k - 1].

Example:

Array:

5 2 4 1 3

Sorted:

1 2 3 4 5

3rd smallest:

3

---

## Q48. How can you find the kth largest element?

Answer:

After sorting in ascending order:

kth largest = arr[n - k]

Example:

Array:

1 2 3 4 5

2nd largest:

arr[5 - 2] = arr[3] = 4

---

## Q49. How can duplicates be removed from a sorted array?

Answer:

Since duplicate elements are adjacent in a sorted array, we can use a two-pointer technique.

One pointer stores the position of the last unique element and another scans the array.

---

## Q50. How can two sorted arrays be merged efficiently?

Answer:

Use two pointers.

One pointer starts at the beginning of the first array.

The other starts at the beginning of the second array.

Compare both values and insert the smaller value into the result.

Time complexity:

O(n + m)

---

# Quick Revision

## Searching

Linear Search:
O(n)

Binary Search:
O(log n)

Binary Search Requirement:
Sorted array

---

## Sorting

Bubble Sort:
O(n²)

Selection Sort:
O(n²)

Insertion Sort:
Best O(n)
Worst O(n²)

---

## Important Concepts

- First Occurrence
- Last Occurrence
- Count Occurrences
- Insertion Position
- Stable Sorting
- In-place Sorting
- Kth Smallest
- Kth Largest
- Merge Sorted Arrays
- Remove Duplicates

---

# Most Important Interview Questions

1. Linear Search vs Binary Search
2. Why does Binary Search require sorted data?
3. Explain Binary Search with an example.
4. Time complexity of Binary Search
5. Explain Bubble Sort.
6. How to optimize Bubble Sort?
7. Explain Selection Sort.
8. Explain Insertion Sort.
9. Which sorting algorithm is good for nearly sorted data?
10. What is stable sorting?
11. What is in-place sorting?
12. Find first occurrence using Binary Search.
13. Find last occurrence using Binary Search.
14. Find kth smallest element.
15. Merge two sorted arrays.

# End of Day 4 Interview Questions