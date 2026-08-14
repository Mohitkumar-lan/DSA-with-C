# Day 2 — Control Flow, Loops and Functions in C

## Introduction

Day 2 focuses on control flow, loops and functions in C.

These concepts are extremely important for DSA because almost every DSA problem requires:

- Conditions
- Repetition
- Decision making
- Functions
- Problem decomposition

---

# 1. What is Control Flow?

Control flow means the order in which statements of a program are executed.

By default, C executes statements from top to bottom.

Control statements allow us to change this flow.

Main types:

1. Decision-making statements
2. Looping statements
3. Jump statements

---

# 2. Decision-Making Statements

Decision-making statements are used when a program needs to make a decision based on a condition.

Main decision statements:

- if
- if-else
- else-if
- nested if
- switch

---

# 3. if Statement

The if statement executes a block of code only when a condition is true.

Syntax:

if (condition)
{
    statement;
}

Example:

int age = 20;

if (age >= 18)
{
    printf("Eligible");
}

---

# 4. if-else Statement

if-else is used when there are two possible paths.

Syntax:

if (condition)
{
    // true block
}
else
{
    // false block
}

Example:

int number = 10;

if (number % 2 == 0)
{
    printf("Even");
}
else
{
    printf("Odd");
}

---

# 5. else-if Ladder

An else-if ladder is used when there are multiple conditions.

Example:

if (marks >= 90)
{
    printf("A");
}
else if (marks >= 80)
{
    printf("B");
}
else if (marks >= 70)
{
    printf("C");
}
else
{
    printf("D");
}

---

# 6. Nested if

An if statement inside another if statement is called nested if.

Example:

if (age >= 18)
{
    if (citizen == 1)
    {
        printf("Eligible");
    }
}

---

# 7. switch Statement

The switch statement is used when we want to select one option from multiple fixed choices.

Syntax:

switch (expression)
{
    case value1:
        statements;
        break;

    case value2:
        statements;
        break;

    default:
        statements;
}

Example:

int day = 2;

switch (day)
{
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;

    default:
        printf("Invalid day");
}

---

# 8. break Statement

break is used to immediately terminate a loop or switch statement.

Example:

for (int i = 1; i <= 10; i++)
{
    if (i == 5)
        break;

    printf("%d ", i);
}

Output:

1 2 3 4

---

# 9. continue Statement

continue skips the current iteration and moves to the next iteration.

Example:

for (int i = 1; i <= 5; i++)
{
    if (i == 3)
        continue;

    printf("%d ", i);
}

Output:

1 2 4 5

---

# 10. What is a Loop?

A loop is used to execute a block of code repeatedly.

Loops help us avoid writing the same code multiple times.

C provides:

1. for loop
2. while loop
3. do-while loop

---

# 11. for Loop

A for loop is commonly used when the number of iterations is known.

Syntax:

for (initialization; condition; update)
{
    statements;
}

Example:

for (int i = 1; i <= 5; i++)
{
    printf("%d ", i);
}

Output:

1 2 3 4 5

---

# 12. Parts of for Loop

Example:

for (int i = 1; i <= 5; i++)

Initialization:
int i = 1

Condition:
i <= 5

Update:
i++

Execution:

1
2
3
4
5

---

# 13. while Loop

A while loop is generally used when the number of iterations is not known in advance.

Syntax:

while (condition)
{
    statements;
}

Example:

int i = 1;

while (i <= 5)
{
    printf("%d ", i);
    i++;
}

---

# 14. do-while Loop

The do-while loop executes its body at least once.

Syntax:

do
{
    statements;
}
while (condition);

Example:

int i = 1;

do
{
    printf("%d ", i);
    i++;
}
while (i <= 5);

---

# 15. Difference Between while and do-while

while:

- Condition is checked first.
- Body may execute zero times.

do-while:

- Body executes first.
- Condition is checked afterward.
- Body executes at least once.

---

# 16. Infinite Loop

An infinite loop is a loop that never terminates.

Example:

while (1)
{
    printf("Hello");
}

This loop continues indefinitely until externally stopped.

---

# 17. Nested Loops

A loop inside another loop is called a nested loop.

Example:

for (int i = 1; i <= 3; i++)
{
    for (int j = 1; j <= 3; j++)
    {
        printf("* ");
    }

    printf("\n");
}

---

# 18. What is a Function?

A function is a block of code designed to perform a specific task.

Functions help us:

- Reuse code
- Reduce repetition
- Organize programs
- Improve readability
- Divide a large problem into smaller problems

---

# 19. Function Syntax

return_type function_name(parameters)
{
    statements;
}

Example:

int add(int a, int b)
{
    return a + b;
}

---

# 20. Function Declaration

A function declaration tells the compiler about a function before it is used.

Example:

int add(int, int);

---

# 21. Function Definition

The function definition contains the actual implementation.

Example:

int add(int a, int b)
{
    return a + b;
}

---

# 22. Function Call

A function call executes the function.

Example:

int result = add(10, 20);

---

# 23. Parameters and Arguments

Parameters are variables defined in the function declaration or definition.

Example:

int add(int a, int b)

Here a and b are parameters.

Arguments are actual values passed during function call.

Example:

add(10, 20);

Here 10 and 20 are arguments.

---

# 24. Return Value

A function can return a value using the return statement.

Example:

int square(int n)
{
    return n * n;
}

---

# 25. void Function

A void function does not return a value.

Example:

void greeting()
{
    printf("Hello");
}

---

# 26. Function With No Parameter

Example:

void message()
{
    printf("Welcome to DSA");
}

---

# 27. Function With Parameters

Example:

int add(int a, int b)
{
    return a + b;
}

---

# 28. Function With Parameter and Return Value

Example:

int square(int n)
{
    return n * n;
}

---

# 29. Why Are Functions Important in DSA?

Functions are extremely important in DSA.

They allow us to divide complex problems into smaller reusable components.

For example:

- binarySearch()
- linearSearch()
- sort()
- swap()
- factorial()

We will use functions heavily in upcoming DSA topics.

---

# 30. Important Number Problems

Day 2 introduces basic number problems that prepare us for DSA problem solving.

Important problems:

- Even/Odd
- Factorial
- Prime number
- Reverse number
- Palindrome
- Sum of digits
- Count digits
- Number ranges

---

# 31. Factorial

Factorial of n is:

n! = n × (n-1) × (n-2) × ... × 1

Example:

5!

= 5 × 4 × 3 × 2 × 1

= 120

---

# 32. Prime Number

A prime number is a positive integer greater than 1 that has exactly two positive divisors:

1 and itself.

Examples:

2
3
5
7
11

Non-prime examples:

1
4
6
8
9

---

# 33. Palindrome Number

A number that remains the same when reversed is called a palindrome number.

Examples:

121
1331
1221

Example:

121 → reverse = 121

Therefore, 121 is a palindrome.

---

# 34. Reverse of a Number

To reverse a number, repeatedly extract its last digit using % 10.

Example:

1234

Last digit = 4

Then remove last digit.

123

Next digit = 3

Reverse:

4321

---

# 35. Sum of Digits

Example:

Number = 1234

Sum:

1 + 2 + 3 + 4 = 10

---

# 36. Count Digits

Example:

Number = 12345

Number of digits = 5

---

# 37. Important Day 2 Summary

Today I learned:

- Control flow
- if
- if-else
- else-if
- Nested if
- switch
- break
- continue
- for loop
- while loop
- do-while loop
- Nested loops
- Functions
- Function declaration
- Function definition
- Function call
- Parameters
- Arguments
- Return value
- void functions
- Factorial
- Prime numbers
- Palindrome
- Reverse number
- Sum of digits
- Count digits

---

# 38. Day 2 Learning Goal

By the end of Day 2, I should be able to:

1. Write conditional programs.
2. Use loops confidently.
3. Use break and continue.
4. Write basic functions.
5. Solve basic number problems.
6. Break a problem into smaller functions.
7. Understand the foundation required for upcoming DSA topics.