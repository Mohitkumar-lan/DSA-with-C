# Day 2 — Interview Questions & Answers

## Q1. What is a control statement?

Answer:
A control statement changes the normal flow of execution of a program.

Examples:
- if
- switch
- loops
- break
- continue

---

## Q2. What is an if statement?

Answer:
An if statement executes a block of code when a specified condition is true.

---

## Q3. What is an if-else statement?

Answer:
An if-else statement provides two execution paths: one when the condition is true and another when it is false.

---

## Q4. What is an else-if ladder?

Answer:
An else-if ladder is used to check multiple conditions sequentially.

---

## Q5. What is nested if?

Answer:
An if statement inside another if statement is called nested if.

---

## Q6. What is switch?

Answer:
The switch statement is used to select one block of code from multiple fixed choices.

---

## Q7. What is the purpose of break?

Answer:
break immediately terminates the nearest loop or switch statement.

---

## Q8. What is the purpose of continue?

Answer:
continue skips the remaining statements of the current iteration and moves to the next iteration.

---

## Q9. What is a loop?

Answer:
A loop repeatedly executes a block of code while a specified condition is satisfied.

---

## Q10. What are the types of loops in C?

Answer:
The three main loops are:

1. for
2. while
3. do-while

---

## Q11. Difference between while and do-while?

Answer:
while checks the condition before executing the body, while do-while executes the body first and checks the condition afterward.

---

## Q12. Which loop executes at least once?

Answer:
The do-while loop executes at least once because its condition is checked after the loop body.

---

## Q13. What is a for loop?

Answer:
A for loop is commonly used when the number of iterations is known.

---

## Q14. What is a nested loop?

Answer:
A loop placed inside another loop is called a nested loop.

---

## Q15. What is an infinite loop?

Answer:
An infinite loop is a loop that continues executing indefinitely because its termination condition is never reached.

---

## Q16. What is a function?

Answer:
A function is a reusable block of code designed to perform a specific task.

---

## Q17. Why are functions important?

Answer:
Functions improve code reusability, readability, organization and reduce code duplication.

---

## Q18. What is a function declaration?

Answer:
A function declaration tells the compiler about the function name, return type and parameters before the function is used.

Example:

int add(int, int);

---

## Q19. What is a function definition?

Answer:
A function definition contains the actual implementation or body of the function.

Example:

int add(int a, int b)
{
    return a + b;
}

---

## Q20. What is a function call?

Answer:
A function call is used to execute a function.

Example:

add(10, 20);

---

## Q21. What are parameters?

Answer:
Parameters are variables specified in the function definition or declaration that receive values from the function call.

---

## Q22. What are arguments?

Answer:
Arguments are the actual values passed to a function during a function call.

---

## Q23. What is a return value?

Answer:
A return value is the value sent back from a function to the calling code using the return statement.

---

## Q24. What is a void function?

Answer:
A void function is a function that does not return a value.

Example:

void hello()
{
    printf("Hello");
}

---

## Q25. Can a function have multiple parameters?

Answer:
Yes. A function can have multiple parameters.

Example:

int add(int a, int b)

Here a and b are two parameters.

---

## Q26. What is factorial?

Answer:
Factorial of a positive integer n is the product of all positive integers from 1 to n.

Example:

5! = 5 × 4 × 3 × 2 × 1 = 120

---

## Q27. What is a prime number?

Answer:
A prime number is a positive integer greater than 1 that has exactly two positive divisors: 1 and itself.

Examples:
2, 3, 5, 7, 11

---

## Q28. What is a palindrome number?

Answer:
A number that remains the same when reversed is called a palindrome number.

Example:

121 → 121

---

## Q29. How can we reverse a number in C?

Answer:
We can repeatedly extract the last digit using % 10 and remove the last digit using integer division by 10.

---

## Q30. Why are functions important in DSA?

Answer:
Functions help divide complex DSA problems into smaller reusable components.

For example:

- search()
- sort()
- swap()
- factorial()
- binarySearch()

This makes DSA programs easier to understand, test and maintain.