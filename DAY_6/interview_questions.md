# DAY 6 — INTERVIEW QUESTIONS

## Q1. What is searching?

Answer:

Searching is the process of finding a particular element in a data structure.

---

## Q2. What is Linear Search?

Answer:

Linear Search checks every element one by one until the target is found or the complete array is checked.

---

## Q3. What is the worst-case complexity of Linear Search?

Answer:

O(n).

---

## Q4. What is the best-case complexity of Linear Search?

Answer:

O(1), when the target is the first element.

---

## Q5. What is Binary Search?

Answer:

Binary Search is a searching algorithm that repeatedly divides a sorted search space into two halves.

---

## Q6. What is the main requirement of Binary Search?

Answer:

The data must be sorted.

---

## Q7. What is the worst-case complexity of Binary Search?

Answer:

O(log n).

---

## Q8. Why is Binary Search faster than Linear Search?

Answer:

Binary Search eliminates approximately half of the remaining search space after each comparison.

---

## Q9. Can Binary Search work on an unsorted array?

Answer:

Normal Binary Search cannot be directly applied to an unsorted array.

---

## Q10. What is the difference between Linear and Binary Search?

Answer:

Linear Search checks elements one by one and works on unsorted data.

Binary Search divides the search space into halves and requires sorted data.

---

## Q11. What does -1 mean in search functions?

Answer:

It commonly means that the target was not found.

---

## Q12. What is an occurrence?

Answer:

An occurrence is one position where a particular value appears in an array.

---

## Q13. What is first occurrence?

Answer:

The smallest index at which the target appears.

---

## Q14. What is last occurrence?

Answer:

The largest index at which the target appears.

---

## Q15. How can we find all occurrences?

Answer:

Traverse the complete array and print every index where arr[i] equals the target.

---

## Q16. What is the purpose of left and right in Binary Search?

Answer:

They represent the current search range.

---

## Q17. How is mid calculated?

Answer:

mid = left + (right - left) / 2

---

## Q18. Why is this mid formula preferred?

Answer:

It can avoid integer overflow that may occur with:

(left + right) / 2

---

## Q19. What happens if arr[mid] == target?

Answer:

The target is found.

---

## Q20. What happens if arr[mid] < target?

Answer:

The target can only be in the right half, so:

left = mid + 1

---

## Q21. What happens if arr[mid] > target?

Answer:

The target can only be in the left half, so:

right = mid - 1

---

## Q22. What is the space complexity of iterative Binary Search?

Answer:

O(1).

---

## Q23. What is the space complexity of Linear Search?

Answer:

O(1) extra space.

---

## Q24. Which search is easier for beginners?

Answer:

Linear Search is generally easier because it simply checks elements one by one.

---

## Q25. When should you use Binary Search?

Answer:

When the data is sorted and efficient searching is required.

---

## Q26. Can Binary Search find duplicate values?

Answer:

Yes, but normal Binary Search may return any occurrence. Modified Binary Search can find the first or last occurrence.

---

## Q27. How do you find the first occurrence using Binary Search?

Answer:

When target is found, store the index and continue searching toward the left.

---

## Q28. How do you find the last occurrence using Binary Search?

Answer:

When target is found, store the index and continue searching toward the right.

---

## Q29. What is the best case of Binary Search?

Answer:

O(1), when the middle element is the target.

---

## Q30. Which search should be used for an unsorted array?

Answer:

Linear Search is suitable.

---

## Quick Revision

Linear Search:

Unsorted/Sorted

O(n)

Binary Search:

Sorted

O(log n)

First occurrence:

Continue left

Last occurrence:

Continue right