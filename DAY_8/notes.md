# DAY 8 — INSERTION SORT

# DSA WITH C

---

## 1. What is Insertion Sort?

Insertion Sort is a simple sorting algorithm.

It builds the sorted array one element at a time.

It works similar to arranging playing cards in your hand.

---

## 2. Real-Life Example

Suppose you have cards:

5 2 4 6

You pick 2.

Compare 2 with 5.

Since 2 is smaller:

2 5

Now pick 4.

Compare 4 with 5.

Shift 5 to the right.

Then insert 4:

2 4 5

Now pick 6:

2 4 5 6

Array is sorted.

---

## 3. Main Idea

Insertion Sort divides the array conceptually into:

1. Sorted portion
2. Unsorted portion

Initially:

First element = sorted

Remaining elements = unsorted

Then one element from the unsorted part is inserted into its correct position.

---

## 4. Important Terms

Key:

The element currently being inserted.

Previous:

The element before the key.

Shift:

Moving an element one position to the right.

---

## 5. Basic Algorithm

For every element starting from index 1:

1. Store current element in key.
2. Set j = i - 1.
3. Compare arr[j] with key.
4. If arr[j] > key, shift arr[j] to the right.
5. Decrease j.
6. Insert key at arr[j + 1].

---

## 6. Basic Code Logic

for(i = 1; i < n; i++)
{
    key = arr[i];
    j = i - 1;

    while(j >= 0 && arr[j] > key)
    {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = key;
}

---

## 7. Example

Array:

5 3 4 1 2

First:

5

Sorted part:

5

---

Take 3:

key = 3

5 > 3

Shift 5:

3 5

---

Take 4:

key = 4

5 > 4

Shift 5:

3 5

Insert 4:

3 4 5

---

Take 1:

1 is smaller than all previous elements.

Result:

1 3 4 5

---

Take 2:

Shift larger elements.

Final:

1 2 3 4 5

---

## 8. Ascending Insertion Sort

Condition:

arr[j] > key

If previous element is greater than key,
shift it to the right.

---

## 9. Descending Insertion Sort

For descending order:

arr[j] < key

If previous element is smaller than key,
shift it to the right.

---

## 10. Time Complexity

Best Case:

O(n)

Average Case:

O(n²)

Worst Case:

O(n²)

---

## 11. Best Case

Best case occurs when the array is already sorted.

Example:

1 2 3 4 5

Very few shifts are required.

Time:

O(n)

---

## 12. Worst Case

Worst case occurs when the array is reverse sorted.

Example:

5 4 3 2 1

Many shifts are required.

Time:

O(n²)

---

## 13. Space Complexity

Insertion Sort uses constant extra space.

Space Complexity:

O(1)

Therefore it is an in-place sorting algorithm.

---

## 14. Is Insertion Sort Stable?

Yes.

Insertion Sort is stable when implemented using a strict comparison.

Equal elements maintain their relative order.

---

## 15. Why is Insertion Sort Useful?

Insertion Sort is useful when:

- Data is small.
- Data is almost sorted.
- Simplicity is important.
- We need an in-place algorithm.

---

## 16. Insertion Sort and Nearly Sorted Data

Suppose:

1 2 3 5 4 6

Only 4 is slightly misplaced.

Insertion Sort can efficiently place 4 into its correct position.

Result:

1 2 3 4 5 6

---

## 17. Insertion Sort vs Bubble Sort

Bubble Sort:

- Compares adjacent elements.
- Uses swapping.
- Moves larger elements toward the end.

Insertion Sort:

- Uses a key.
- Shifts elements.
- Inserts key into correct position.

---

## 18. Insertion Sort vs Selection Sort

Insertion Sort:

- Can be O(n) for already sorted data.
- Uses shifting.
- Stable.

Selection Sort:

- Always O(n²) comparisons.
- Uses selection and swapping.
- Basic version is unstable.

---

## 19. Comparison Table

| Algorithm | Best | Average | Worst | Space |
|------------|------|---------|-------|-------|
| Bubble Sort | O(n) optimized | O(n²) | O(n²) | O(1) |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) |

---

## 20. Important Edge Cases

Test Insertion Sort with:

- Empty array
- One element
- Already sorted array
- Reverse sorted array
- Duplicate values
- Negative values
- All equal values

---

## 21. Important Difference: Swap vs Shift

Bubble Sort commonly uses swapping.

Insertion Sort mainly uses shifting.

Example:

Before:

5 8 10 3

Key:

3

Shift 10:

5 8 10 10

Shift 8:

5 8 8 10

Shift 5:

5 5 8 10

Insert 3:

3 5 8 10

---

## 22. Insertion Position

The key is inserted at:

arr[j + 1]

after all larger elements have been shifted.

---

## 23. Number of Passes

For n elements:

n - 1 passes.

Because the first element is considered sorted initially.

---

## 24. Important Interview Point

Insertion Sort is often preferred for small or nearly sorted datasets because its best-case running time is O(n).

---

## 25. Day 8 Learning Outcome

After Day 8, I should be able to:

- Explain Insertion Sort.
- Perform a dry run.
- Write Insertion Sort in C.
- Sort ascending.
- Sort descending.
- Explain key and shifting.
- Explain time complexity.
- Explain space complexity.
- Compare three basic sorting algorithms.