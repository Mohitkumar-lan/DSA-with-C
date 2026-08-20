# DAY 7 — SORTING BASICS

# DSA WITH C

---

## 1. What is Sorting?

Sorting means arranging data in a particular order.

Common orders:

1. Ascending Order
2. Descending Order

Example:

Unsorted:

50 20 40 10 30

Ascending:

10 20 30 40 50

Descending:

50 40 30 20 10

---

# 2. Why is Sorting Important?

Sorting makes data easier to:

- Search
- Analyze
- Display
- Process
- Find minimum and maximum values

For example, Binary Search requires sorted data.

---

# 3. Ascending Order

Ascending means:

Smallest → Largest

Example:

5 10 15 20 25

---

# 4. Descending Order

Descending means:

Largest → Smallest

Example:

25 20 15 10 5

---

# 5. Important Sorting Algorithms

Some common sorting algorithms are:

- Bubble Sort
- Selection Sort
- Insertion Sort
- Merge Sort
- Quick Sort
- Heap Sort

Today we focus on:

1. Bubble Sort
2. Selection Sort

---

# 6. Bubble Sort

Bubble Sort repeatedly compares adjacent elements.

If they are in the wrong order, they are swapped.

Example:

5 3 4 1

Compare:

5 and 3

Since:

5 > 3

Swap:

3 5 4 1

Next:

5 and 4

Swap:

3 4 5 1

Next:

5 and 1

Swap:

3 4 1 5

After one pass:

3 4 1 5

The largest element has moved to the end.

---

# 7. Why is it called Bubble Sort?

The larger elements gradually move toward the end of the array.

It looks like larger elements "bubble" toward their correct position.

---

# 8. Bubble Sort Algorithm

For each pass:

1. Compare adjacent elements.
2. If left element is greater than right element:
   Swap them.
3. Continue until the end.
4. Repeat for remaining elements.

---

# 9. Bubble Sort Example

Array:

5 1 4 2 8

Pass 1:

5 1 → swap

1 5 4 2 8

5 4 → swap

1 4 5 2 8

5 2 → swap

1 4 2 5 8

5 8 → no swap

Result:

1 4 2 5 8

Pass 2:

1 4 → no swap

4 2 → swap

1 2 4 5 8

4 5 → no swap

Result:

1 2 4 5 8

---

# 10. Bubble Sort Code Logic

Basic structure:

for(i = 0; i < n-1; i++)
{
    for(j = 0; j < n-i-1; j++)
    {
        if(arr[j] > arr[j+1])
        {
            swap;
        }
    }
}

---

# 11. Bubble Sort Complexity

Worst Case:

O(n²)

Average Case:

O(n²)

Basic implementation Best Case:

O(n²)

Optimized implementation Best Case:

O(n)

Space:

O(1)

---

# 12. Bubble Sort Optimization

We can use a flag:

swapped

Initially:

swapped = 0

Whenever a swap happens:

swapped = 1

After one complete pass:

If swapped == 0

The array is already sorted.

So we can stop early.

---

# 13. Optimized Bubble Sort

Example:

1 2 3 4 5

Already sorted.

No swaps occur.

Therefore we can stop after the first pass.

Best Case:

O(n)

---

# 14. Selection Sort

Selection Sort repeatedly finds the smallest element from the unsorted portion and places it at the correct position.

---

# 15. Selection Sort Example

Array:

64 25 12 22 11

Find minimum:

11

Swap with first element:

11 25 12 22 64

Now consider:

25 12 22 64

Minimum:

12

Swap:

11 12 25 22 64

Next minimum:

22

Swap:

11 12 22 25 64

Sorted:

11 12 22 25 64

---

# 16. Selection Sort Algorithm

1. Start from index 0.
2. Assume it contains the minimum.
3. Search the remaining array.
4. Find the actual minimum.
5. Swap it with the current position.
6. Move to the next position.
7. Repeat.

---

# 17. Selection Sort Logic

for(i = 0; i < n-1; i++)
{
    minIndex = i;

    for(j = i+1; j < n; j++)
    {
        if(arr[j] < arr[minIndex])
        {
            minIndex = j;
        }
    }

    swap(arr[i], arr[minIndex]);
}

---

# 18. Selection Sort Complexity

Best:

O(n²)

Average:

O(n²)

Worst:

O(n²)

Space:

O(1)

---

# 19. Bubble Sort vs Selection Sort

Bubble Sort:

- Compares adjacent elements.
- Performs many swaps.
- Can be optimized.
- Best optimized case can be O(n).

Selection Sort:

- Finds minimum.
- Usually performs fewer swaps.
- Always performs O(n²) comparisons.

---

# 20. Number of Passes

For n elements:

Number of passes:

n - 1

Example:

5 elements:

4 passes

---

# 21. Swapping

Swapping means exchanging two values.

Example:

a = 10
b = 20

After swap:

a = 20
b = 10

Using temporary variable:

temp = a;
a = b;
b = temp;

---

# 22. Sorting in Descending Order

For ascending:

if(arr[j] > arr[j+1])

swap.

For descending:

if(arr[j] < arr[j+1])

swap.

---

# 23. Stable Sorting — Basic Idea

A stable sorting algorithm maintains the relative order of equal elements.

Bubble Sort is generally stable when implemented using a strict comparison.

Basic Selection Sort is generally considered unstable.

---

# 24. In-place Sorting

An in-place algorithm uses very little additional memory.

Bubble Sort:

O(1) extra space.

Selection Sort:

O(1) extra space.

---

# 25. Important Edge Cases

Always test:

- Empty array
- One element
- Already sorted array
- Reverse sorted array
- Duplicate elements
- All elements equal
- Negative numbers

---

# 26. Key Complexity Table

| Algorithm | Best | Average | Worst | Space |
|------------|------|---------|-------|-------|
| Bubble Sort | O(n) optimized | O(n²) | O(n²) | O(1) |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) |

---

# 27. Day 7 Learning Outcome

After completing Day 7, I should be able to:

- Explain sorting.
- Explain ascending and descending order.
- Implement Bubble Sort.
- Implement optimized Bubble Sort.
- Implement Selection Sort.
- Sort in ascending order.
- Sort in descending order.
- Explain time complexity.
- Explain space complexity.
- Compare Bubble Sort and Selection Sort.