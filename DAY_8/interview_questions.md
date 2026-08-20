# DAY 8 — INTERVIEW QUESTIONS

## Q1. What is Insertion Sort?

Answer:
Insertion Sort is a comparison-based sorting algorithm that builds the sorted array one element at a time.

---

## Q2. How does Insertion Sort work?

Answer:
It takes one element as a key and inserts it into its correct position in the already sorted portion.

---

## Q3. What is the key in Insertion Sort?

Answer:
The key is the current element that needs to be inserted into the sorted portion.

---

## Q4. From which index does Insertion Sort normally start?

Answer:
It starts from index 1 because the first element is initially considered sorted.

---

## Q5. What is the best-case time complexity?

Answer:
O(n).

---

## Q6. What is the worst-case time complexity?

Answer:
O(n²).

---

## Q7. What is the average-case complexity?

Answer:
O(n²).

---

## Q8. What is the space complexity?

Answer:
O(1) extra space.

---

## Q9. Is Insertion Sort stable?

Answer:
Yes, standard Insertion Sort is stable when equal elements are not unnecessarily shifted.

---

## Q10. Is Insertion Sort in-place?

Answer:
Yes. It requires O(1) extra space.

---

## Q11. Why is Insertion Sort good for nearly sorted arrays?

Answer:
Because only a small number of elements need to be shifted.

---

## Q12. What is shifting?

Answer:
Shifting means moving an element one position to the right to make space for the key.

---

## Q13. What is the difference between swapping and shifting?

Answer:
Swapping exchanges two values, while shifting moves elements to create a position for another element.

---

## Q14. What happens when the array is already sorted?

Answer:
Insertion Sort runs in O(n) time.

---

## Q15. What happens with reverse sorted data?

Answer:
It requires maximum shifting and takes O(n²) time.

---

## Q16. What is the condition for ascending Insertion Sort?

Answer:

arr[j] > key

---

## Q17. What is the condition for descending Insertion Sort?

Answer:

arr[j] < key

---

## Q18. Where is the key finally placed?

Answer:

arr[j + 1]

---

## Q19. Why do we use j = i - 1?

Answer:
Because j points to the last element of the sorted portion.

---

## Q20. What happens when arr[j] is greater than key?

Answer:
arr[j] is shifted one position to the right.

---

## Q21. How many passes does Insertion Sort perform?

Answer:
Generally n - 1 passes.

---

## Q22. Which real-life example explains Insertion Sort?

Answer:
Arranging playing cards in your hand.

---

## Q23. Compare Insertion Sort and Bubble Sort.

Answer:
Bubble Sort mainly uses adjacent comparisons and swapping, while Insertion Sort uses a key and shifting.

---

## Q24. Compare Insertion Sort and Selection Sort.

Answer:
Insertion Sort inserts each element into its correct position, while Selection Sort finds the minimum element and places it at the current position.

---

## Q25. Which is better for nearly sorted data?

Answer:
Insertion Sort is generally better.

---

## Q26. Is Insertion Sort recursive?

Answer:
It is normally implemented iteratively, although a recursive implementation is possible.

---

## Q27. Can Insertion Sort handle duplicate elements?

Answer:
Yes.

---

## Q28. Can Insertion Sort handle negative numbers?

Answer:
Yes. It compares values normally, so negative numbers are supported.

---

## Q29. What is one major advantage of Insertion Sort?

Answer:
It is simple, in-place, stable, and efficient for small or nearly sorted data.

---

## Q30. What is one major disadvantage?

Answer:
Its average and worst-case time complexity is O(n²), making it inefficient for large unsorted datasets.