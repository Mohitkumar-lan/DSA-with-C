# Day 3 — Arrays in C

# 1. Introduction to Arrays

An array is a collection of elements of the same data type stored in contiguous memory locations.

Example:

int marks[5];

Here:

- int = data type
- marks = array name
- 5 = number of elements

---

# 2. Why Do We Need Arrays?

Suppose we want to store marks of 5 students.

Without array:

int m1, m2, m3, m4, m5;

With array:

int marks[5];

Arrays make it easier to:

- Store multiple values
- Access values using index
- Traverse data
- Search data
- Perform calculations
- Implement many DSA algorithms

---

# 3. Array Declaration

Syntax:

data_type array_name[size];

Example:

int numbers[5];

float prices[10];

char name[20];

---

# 4. Array Initialization

We can initialize an array while declaring it.

Example:

int numbers[5] = {10, 20, 30, 40, 50};

---

# 5. Partial Initialization

We can initialize only some elements.

Example:

int numbers[5] = {10, 20};

The remaining elements are initialized to 0.

Conceptually:

10 20 0 0 0

---

# 6. Array Index

Array indexing starts from 0.

For:

int arr[5] = {10, 20, 30, 40, 50};

Indexes are:

Index:   0   1   2   3   4
Value:  10  20  30  40  50

First element:

arr[0]

Last element:

arr[4]

In general:

Last index = size - 1

---

# 7. Accessing Array Elements

Example:

int arr[3] = {10, 20, 30};

printf("%d", arr[0]);

Output:

10

---

# 8. Updating Array Elements

Example:

int arr[3] = {10, 20, 30};

arr[1] = 100;

Now:

10 100 30

---

# 9. Traversing an Array

Traversal means visiting every element of an array.

Example:

int arr[5] = {10, 20, 30, 40, 50};

for (int i = 0; i < 5; i++)
{
    printf("%d ", arr[i]);
}

Output:

10 20 30 40 50

---

# 10. Taking Array Input

Example:

int arr[5];

for (int i = 0; i < 5; i++)
{
    scanf("%d", &arr[i]);
}

---

# 11. Printing Array

Example:

for (int i = 0; i < 5; i++)
{
    printf("%d ", arr[i]);
}

---

# 12. Array Size

If:

int arr[10];

Then the array can store 10 integers.

Indexes:

0 to 9

---

# 13. Important Rule

C does not automatically perform bounds checking for normal arrays.

For:

int arr[5];

Valid indexes:

0, 1, 2, 3, 4

Accessing arr[5] is outside the valid range and leads to undefined behavior.

---

# 14. Sum of Array Elements

Example:

arr = {10, 20, 30}

Sum:

10 + 20 + 30 = 60

Code logic:

sum = 0;

for each element:
    sum = sum + element

---

# 15. Average of Array

Formula:

Average = Sum / Number of Elements

Example:

10, 20, 30

Sum = 60

Average = 60 / 3

Average = 20

---

# 16. Maximum Element

To find maximum:

1. Assume first element is maximum.
2. Compare it with remaining elements.
3. Update maximum when a larger value is found.

Example:

10 50 20 40

Maximum = 50

---

# 17. Minimum Element

To find minimum:

1. Assume first element is minimum.
2. Compare with remaining elements.
3. Update minimum when a smaller value is found.

Example:

10 50 20 40

Minimum = 10

---

# 18. Linear Search

Linear Search checks elements one by one.

Example:

Array:

10 20 30 40 50

Search:

30

Process:

10 -> no
20 -> no
30 -> found

Therefore, 30 is present.

---

# 19. Linear Search Complexity

For an array of n elements:

Best case:

O(1)

Worst case:

O(n)

Average case:

O(n)

---

# 20. Reverse an Array

Example:

Original:

10 20 30 40 50

Reversed:

50 40 30 20 10

One common method is to use two indexes:

left = 0

right = n - 1

Swap arr[left] and arr[right].

Then:

left++

right--

Continue until left >= right.

---

# 21. Swapping Array Elements

Example:

int temp;

temp = arr[i];

arr[i] = arr[j];

arr[j] = temp;

---

# 22. Copying an Array

Example:

for (int i = 0; i < n; i++)
{
    b[i] = a[i];
}

---

# 23. Even and Odd Elements

An element is even if:

element % 2 == 0

An element is odd if:

element % 2 != 0

---

# 24. Positive and Negative Elements

Positive:

element > 0

Negative:

element < 0

Zero:

element == 0

---

# 25. Frequency of an Element

Frequency means the number of times an element occurs.

Example:

Array:

10 20 10 30 10

Frequency of 10:

3

---

# 26. Duplicate Elements

An element is duplicate if it occurs more than once.

Example:

10 20 10 30 20

Duplicates:

10 and 20

---

# 27. Unique Elements

An element is unique if it occurs exactly once.

Example:

10 20 10 30

Unique elements:

20 and 30

---

# 28. Second Largest Element

Example:

10 50 20 40 30

Largest:

50

Second largest:

40

We should not simply sort the array if the goal is to practice an efficient one-pass approach.

---

# 29. Sorted Array

An array is sorted in ascending order if:

arr[i] <= arr[i + 1]

for all valid adjacent positions.

Example:

10 20 30 40 50

This is sorted.

Example:

10 30 20 40

This is not sorted.

---

# 30. Insertion in Array

Insertion means adding an element at a particular position.

Example:

Original:

10 20 40 50

Insert 30 at index 2.

Result:

10 20 30 40 50

Elements after the insertion position must be shifted to the right.

---

# 31. Deletion from Array

Deletion means removing an element from a particular position.

Example:

Original:

10 20 30 40 50

Delete element at index 2.

Result:

10 20 40 50

Elements after the deleted position are shifted to the left.

---

# 32. Array Insertion Complexity

Insertion at the end can be O(1) if space is available and the current logical size is tracked.

Insertion at the beginning or middle generally requires shifting elements.

Worst-case complexity:

O(n)

---

# 33. Array Deletion Complexity

Deleting an element from the beginning or middle usually requires shifting elements.

Worst-case complexity:

O(n)

---

# 34. Array Search Complexity

Linear search:

Best case = O(1)

Worst case = O(n)

---

# 35. Array Access Complexity

Accessing an array element using its index is generally:

O(1)

Example:

arr[5]

The index allows direct access.

---

# 36. 2D Array

A two-dimensional array is an array arranged in rows and columns.

Example:

int matrix[2][3];

It contains:

2 rows

3 columns

Total elements:

2 × 3 = 6

---

# 37. 2D Array Example

int matrix[2][2] =
{
    {1, 2},
    {3, 4}
};

Representation:

1 2
3 4

---

# 38. Traversing a 2D Array

We generally use nested loops.

for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < columns; j++)
    {
        printf("%d ", matrix[i][j]);
    }
}

---

# 39. Matrix Diagonal

For a square matrix, the main diagonal contains elements where:

row index == column index

Example:

1 2 3
4 5 6
7 8 9

Main diagonal:

1 5 9

---

# 40. Matrix Transpose

Transpose changes rows into columns and columns into rows.

Example:

Original:

1 2
3 4

Transpose:

1 3
2 4

---

# 41. Time Complexity of Common Array Operations

Access:

O(1)

Linear Search:

O(n)

Traversal:

O(n)

Insertion at beginning:

O(n)

Deletion at beginning:

O(n)

Finding maximum:

O(n)

Finding minimum:

O(n)

---

# 42. Space Complexity

For an array of n elements, the storage required for the elements is:

O(n)

---

# 43. Advantages of Arrays

- Simple to use
- Fast indexed access
- Memory locality
- Easy traversal
- Useful for many algorithms

---

# 44. Disadvantages of Arrays

- Fixed size for normal statically allocated arrays
- Insertion can require shifting
- Deletion can require shifting
- May waste allocated space if underused
- Can overflow the allocated bounds if used incorrectly

---

# 45. Arrays and DSA

Arrays are one of the most important foundations of DSA.

Many advanced data structures and algorithms build on array concepts.

Examples:

- Searching
- Sorting
- Prefix sums
- Two pointers
- Sliding window
- Hashing concepts
- Dynamic programming tables

---

# 46. Day 3 Summary

Today I learned:

- Array definition
- Array declaration
- Array initialization
- Array indexing
- Array traversal
- Array input/output
- Sum
- Average
- Maximum
- Minimum
- Linear Search
- Reverse
- Copy 
- Frequency
- Duplicate elements
- Unique elements
- Second largest
- Second smallest
- Sorted array
- Array insertion
- Array deletion
- Left rotation
- Right rotation
- 2D arrays
- Matrix
- Diagonal
- Transpose
- Array complexity

---

# 47. Day 3 Learning Goal

By the end of Day 3, I should be able to:

1. Create arrays in C.
2. Take array input.
3. Traverse arrays.
4. Search elements.
5. Find maximum and minimum.
6. Reverse an array.
7. Insert and delete elements.
8. Detect duplicates.
9. Check whether an array is sorted.
10. Work with basic 2D arrays.
11. Understand basic array time complexity.
