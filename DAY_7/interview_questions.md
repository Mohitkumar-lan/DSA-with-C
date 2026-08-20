# DAY 7 — INTERVIEW QUESTIONS

## Q1. What is sorting?

Answer:
Sorting is the process of arranging data in a specific order.

---

## Q2. What are the two common sorting orders?

Answer:
Ascending and descending order.

---

## Q3. What is Bubble Sort?

Answer:
Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order.

---

## Q4. Why is it called Bubble Sort?

Answer:
Because larger elements gradually move toward the end of the array like bubbles.

---

## Q5. What is the worst-case complexity of Bubble Sort?

Answer:
O(n²).

---

## Q6. What is the best-case complexity of optimized Bubble Sort?

Answer:
O(n), when the array is already sorted.

---

## Q7. What is Selection Sort?

Answer:
Selection Sort repeatedly finds the minimum element from the unsorted portion and places it at the correct position.

---

## Q8. What is the complexity of Selection Sort?

Answer:
O(n²) in best, average, and worst cases.

---

## Q9. What is the main difference between Bubble Sort and Selection Sort?

Answer:
Bubble Sort compares adjacent elements, while Selection Sort finds the minimum element from the unsorted portion.

---

## Q10. Which usually performs fewer swaps?

Answer:
Selection Sort usually performs fewer swaps than Bubble Sort.

---

## Q11. What is swapping?

Answer:
Swapping means exchanging the values of two variables.

---

## Q12. How do you swap two values in C?

Answer:

temp = a;
a = b;
b = temp;

---

## Q13. What is an optimized Bubble Sort?

Answer:
It uses a flag to detect whether any swap occurred during a pass. If no swap occurs, sorting stops early.

---

## Q14. What happens if no swap occurs during an optimized Bubble Sort pass?

Answer:
The array is already sorted, so the algorithm can stop.

---

## Q15. Is Bubble Sort stable?

Answer:
Yes, a standard implementation using a strict comparison can be stable.

---

## Q16. Is Selection Sort stable?

Answer:
Basic Selection Sort is generally considered unstable.

---

## Q17. What is in-place sorting?

Answer:
An in-place sorting algorithm uses very little additional memory apart from the input array.

---

## Q18. What is the space complexity of Bubble Sort?

Answer:
O(1) extra space.

---

## Q19. What is the space complexity of Selection Sort?

Answer:
O(1) extra space.

---

## Q20. How many passes are needed for n elements?

Answer:
Generally n-1 passes.

---

## Q21. Why is sorting useful?

Answer:
Sorting makes searching, analysis, and data processing easier.

---

## Q22. Why is sorted data useful for Binary Search?

Answer:
Binary Search uses the ordering of data to eliminate half of the search space at each step.

---

## Q23. Can Bubble Sort sort in descending order?

Answer:
Yes. Change the comparison condition accordingly.

---

## Q24. How do you perform Bubble Sort in ascending order?

Answer:

Compare adjacent elements and swap when:

arr[j] > arr[j+1]

---

## Q25. How do you perform Bubble Sort in descending order?

Answer:

Compare adjacent elements and swap when:

arr[j] < arr[j+1]

---

## Q26. What is the best case of basic Bubble Sort without optimization?

Answer:
O(n²).

---

## Q27. What is the best case of optimized Bubble Sort?

Answer:
O(n).

---

## Q28. What is the main idea behind Selection Sort?

Answer:
Find the smallest element from the unsorted part and place it at the current position.

---

## Q29. Which is easier to understand for beginners?

Answer:
Both are beginner-friendly, but Bubble Sort is often easier to visualize because of adjacent comparisons.

---

## Q30. Which sorting algorithms will be important later in DSA?

Answer:
Insertion Sort, Merge Sort, Quick Sort, Heap Sort and others.