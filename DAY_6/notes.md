# DAY 6 — SEARCHING IN ARRAYS

# DSA WITH C

---

## 1. What is Searching?

Searching means finding whether a particular element exists in a data structure.

The element we want to find is called the:

Target / Key

Example:

Array:

10 20 30 40 50

Target:

30

Output:

Element found.

---

# 2. Types of Searching

Two important searching techniques are:

1. Linear Search
2. Binary Search

---

# 3. Linear Search

Linear Search checks elements one by one from the beginning.

Example:

Array:

10 20 30 40 50

Target:

30

Process:

10 -> Not found
20 -> Not found
30 -> Found

---

# 4. Linear Search Algorithm

Step 1:

Start from index 0.

Step 2:

Compare arr[i] with target.

Step 3:

If arr[i] == target:

Element found.

Step 4:

Otherwise move to the next element.

Step 5:

If the complete array is checked:

Element not found.

---

# 5. Linear Search Example

Array:

5 10 15 20 25

Target:

20

Checking:

5 -> No
10 -> No
15 -> No
20 -> Yes

Index:

3

---

# 6. Linear Search Complexity

Best Case:

O(1)

If target is the first element.

Worst Case:

O(n)

If target is the last element or does not exist.

Average Case:

O(n)

Space Complexity:

O(1)

---

# 7. Linear Search Pseudocode

START

Read array

Read target

FOR i = 0 to n-1

    IF arr[i] == target

        Print found

        STOP

Print not found

END

---

# 8. Linear Search Using Function

We can create a function:

int linearSearch(int arr[], int n, int target)

The function returns the index if the element exists.

Otherwise it returns:

-1

Example:

return -1;

means element was not found.

---

# 9. First Occurrence

Suppose:

Array:

10 20 20 30 20

Target:

20

First occurrence:

Index 1

We stop when the first matching element is found.

---

# 10. All Occurrences

Suppose:

Array:

10 20 20 30 20

Target:

20

Occurrences:

Index 1
Index 2
Index 4

We do not stop after the first match.

---

# 11. Count Occurrences

We can count how many times a target appears.

Example:

Array:

1 2 2 2 3

Target:

2

Count:

3

---

# 12. Binary Search

Binary Search is a faster searching algorithm.

Important:

Binary Search requires a sorted array.

Example:

10 20 30 40 50 60 70

Target:

50

Instead of checking every element, Binary Search repeatedly divides the search range into two halves.

---

# 13. Binary Search Process

Suppose:

Array:

10 20 30 40 50 60 70

Target:

60

left = 0

right = 6

middle:

mid = (left + right) / 2

mid = 3

arr[mid] = 40

40 < 60

Therefore search in the right half.

left = mid + 1

Now:

left = 4
right = 6

mid = 5

arr[mid] = 60

Target found.

---

# 14. Binary Search Conditions

If:

arr[mid] == target

Target found.

If:

arr[mid] < target

Search right half.

left = mid + 1

If:

arr[mid] > target

Search left half.

right = mid - 1

---

# 15. Binary Search Algorithm

1. Set left = 0.
2. Set right = n - 1.
3. Calculate mid.
4. Compare arr[mid] with target.
5. If equal, return mid.
6. If target is greater, move left.
7. Otherwise move right.
8. Repeat until left > right.

---

# 16. Binary Search Complexity

Best Case:

O(1)

Worst Case:

O(log n)

Average Case:

O(log n)

Space Complexity of iterative version:

O(1)

---

# 17. Why Binary Search is Faster?

Linear Search may check every element.

For n elements:

O(n)

Binary Search removes approximately half of the remaining elements after every comparison.

Therefore:

O(log n)

---

# 18. Example

Array:

1 2 3 4 5 6 7 8

Target:

7

Binary Search:

Middle = 4

7 > 4

Search right side.

Then:

6

Then:

7

Found.

---

# 19. Binary Search Requires Sorted Data

Example:

Sorted:

10 20 30 40 50

Binary Search works.

Unsorted:

30 10 50 20 40

Normal Binary Search cannot be directly applied.

The array should first be sorted.

---

# 20. First Occurrence Using Binary Search

If duplicates exist:

1 2 2 2 3

Target:

2

Normal Binary Search may find any 2.

For first occurrence:

When target is found:

store answer

then continue searching left.

---

# 21. Last Occurrence

For:

1 2 2 2 3

Target:

2

Last occurrence:

Index 3

When target is found:

store answer

then continue searching right.

---

# 22. Linear Search vs Binary Search

Linear Search:

- Works on sorted and unsorted arrays.
- Simple.
- O(n) worst case.

Binary Search:

- Requires sorted array.
- Faster.
- O(log n) worst case.

---

# 23. Important Formula

Binary Search:

mid = left + (right - left) / 2

This is preferred over:

mid = (left + right) / 2

because it can avoid integer overflow when indexes are very large.

---

# 24. Search Result

Common convention:

Return index if found.

Return -1 if not found.

Example:

Target found at index 4:

return 4;

Not found:

return -1;

---

# 25. Important Edge Cases

Always test:

- Empty array
- One element
- Target at first position
- Target at last position
- Target not present
- Duplicate elements
- Target smaller than all elements
- Target greater than all elements

---

# 26. Day 6 Learning Outcome

After Day 6 I should be able to:

- Explain searching.
- Implement Linear Search.
- Implement Binary Search.
- Understand sorted arrays.
- Find first occurrence.
- Find last occurrence.
- Count occurrences.
- Compare O(n) and O(log n).
- Use functions for searching.
- Handle edge cases.