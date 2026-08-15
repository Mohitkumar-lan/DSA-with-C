# Day 3 — Arrays in C
# Interview Questions and Answers

## Q1. What is an array?

Answer:

An array is a collection of elements of the same data type stored in contiguous memory locations.

Example:

int arr[5];

---

## Q2. Why are arrays used?

Answer:

Arrays are used to store multiple values of the same data type using a single variable name.

---

## Q3. How does array indexing start in C?

Answer:

Array indexing starts from 0.

For an array of size 5, valid indexes are:

0, 1, 2, 3, 4

---

## Q4. What is the last valid index of an array of size n?

Answer:

The last valid index is:

n - 1

---

## Q5. How do you declare an array in C?

Answer:

Syntax:

data_type array_name[size];

Example:

int arr[10];

---

## Q6. How do you initialize an array?

Answer:

Example:

int arr[5] = {10, 20, 30, 40, 50};

---

## Q7. Can we initialize an array without specifying its size?

Answer:

Yes.

Example:

int arr[] = {10, 20, 30, 40};

The compiler determines the size automatically.

---

## Q8. What is array traversal?

Answer:

Array traversal means visiting each element of an array one by one.

Example:

for (int i = 0; i < n; i++)
{
    printf("%d ", arr[i]);
}

---

## Q9. What is the time complexity of accessing an array element?

Answer:

The time complexity is O(1).

Example:

arr[5]

An element can be accessed directly using its index.

---

## Q10. What is linear search?

Answer:

Linear search checks array elements one by one until the required element is found or the array ends.

---

## Q11. What is the time complexity of linear search?

Answer:

Best case:

O(1)

Worst case:

O(n)

Average case:

O(n)

---

## Q12. How do you find the maximum element in an array?

Answer:

First, assume the first element is maximum.

Then compare it with all remaining elements.

If a larger element is found, update maximum.

Time complexity:

O(n)

---

## Q13. How do you find the minimum element in an array?

Answer:

First, assume the first element is minimum.

Then compare it with all remaining elements.

If a smaller element is found, update minimum.

Time complexity:

O(n)

---

## Q14. How do you reverse an array?

Answer:

A common approach is to use two pointers.

Initialize:

left = 0

right = n - 1

Swap arr[left] and arr[right].

Then:

left++

right--

Continue until left >= right.

Time complexity:

O(n)

---

## Q15. What is the space complexity of reversing an array using two pointers?

Answer:

The extra space complexity is O(1) because only a temporary variable is required for swapping.

---

## Q16. What is array insertion?

Answer:

Array insertion means adding an element at a particular position.

If the element is inserted in the middle or beginning, existing elements generally need to be shifted to the right.

---

## Q17. What is the time complexity of insertion at the beginning of an array?

Answer:

The worst-case time complexity is O(n) because elements need to be shifted.

---

## Q18. What is array deletion?

Answer:

Array deletion means removing an element from a particular position.

Elements after the deleted position generally need to be shifted to the left.

---

## Q19. What is the time complexity of deletion from the beginning?

Answer:

The worst-case time complexity is O(n).

---

## Q20. What is an array frequency?

Answer:

Frequency means the number of times a particular element occurs in an array.

Example:

Array:

10 20 10 30 10

Frequency of 10 = 3

---

## Q21. What is a duplicate element?

Answer:

An element is called duplicate if it occurs more than once in an array.

Example:

10 20 10 30

Here, 10 is a duplicate.

---

## Q22. What is a unique element?

Answer:

An element is unique if it occurs exactly once in an array.

Example:

10 20 10 30

Here, 20 and 30 are unique.

---

## Q23. How can you check whether an array is sorted?

Answer:

Compare every adjacent pair.

For ascending order:

arr[i] <= arr[i + 1]

If any pair violates this condition, the array is not sorted.

Time complexity:

O(n)

---

## Q24. What is a two-dimensional array?

Answer:

A two-dimensional array stores elements in rows and columns.

Example:

int matrix[3][3];

---

## Q25. How many elements are present in int matrix[2][4]?

Answer:

Number of elements:

2 × 4 = 8

---

## Q26. How do you traverse a two-dimensional array?

Answer:

A two-dimensional array is generally traversed using nested loops.

Example:

for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < columns; j++)
    {
        printf("%d ", matrix[i][j]);
    }
}

---

## Q27. What is a matrix transpose?

Answer:

Transpose converts rows into columns and columns into rows.

Example:

Original:

1 2
3 4

Transpose:

1 3
2 4

---

## Q28. What is the main diagonal of a matrix?

Answer:

In a square matrix, the main diagonal contains elements whose row index and column index are equal.

Condition:

i == j

Example:

1 2 3
4 5 6
7 8 9

Main diagonal:

1, 5, 9

---

## Q29. What happens if we access an array outside its valid range in C?

Answer:

Accessing an element outside the valid bounds of an array results in undefined behavior.

For:

int arr[5];

Valid indexes are:

0 to 4

arr[5] is outside the valid range.

---

## Q30. Why are arrays important in DSA?

Answer:

Arrays are one of the fundamental data structures in DSA.

They are used as a foundation for many important concepts such as:

- Searching
- Sorting
- Two Pointer Technique
- Sliding Window
- Prefix Sum
- Dynamic Programming
- Matrix Problems

Strong knowledge of arrays is essential before moving to advanced DSA topics.

---

# Quick Interview Revision

1. Array = collection of same-type elements.
2. Indexing starts from 0.
3. Last index = n - 1.
4. Array access = O(1).
5. Linear Search = O(n) worst case.
6. Traversal = O(n).
7. Finding maximum = O(n).
8. Finding minimum = O(n).
9. Reverse using two pointers = O(n).
10. Reverse extra space = O(1).
11. Beginning insertion = O(n).
12. Beginning deletion = O(n).
13. 2D array = rows + columns.
14. Matrix traversal = nested loops.
15. Main diagonal condition = i == j.