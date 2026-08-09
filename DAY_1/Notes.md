# Day 1 — C Fundamentals & Introduction to DSA

## 1. Introduction

This is Day 1 of my DSA with C journey.

The goal of Day 1 is to build a strong foundation in C programming and understand the basic concepts of Data Structures and Algorithms.

Topics covered:

- What is C?
- Structure of a C program
- printf()
- scanf()
- Variables
- Constants
- Data Types
- Format Specifiers
- Operators
- Expressions
- Type Casting
- What is Data?
- What is Data Structure?
- What is an Algorithm?
- What is DSA?
- Need of Data Structures
- Types of Data Structures
- Linear Data Structures
- Non-Linear Data Structures

---

# 2. What is C?

C is a general-purpose, procedural programming language.

C is widely used for:

- System programming
- Operating systems
- Embedded systems
- Compilers
- Application development
- Data Structures and Algorithms

C is especially useful for learning DSA because it gives a strong understanding of memory, arrays, pointers, structures and dynamic memory allocation.

---

# 3. Basic Structure of a C Program

Example:

#include <stdio.h>

int main()
{
    printf("Hello, World!");

    return 0;
}

Explanation:

#include <stdio.h>
- Includes the Standard Input Output library.
- It allows us to use functions such as printf() and scanf().

int main()
- main() is the starting point of a C program.
- Program execution starts from main().

printf()
- Used to display output on the screen.

return 0;
- Indicates that the program completed successfully.

---

# 4. Comments in C

Comments are ignored by the compiler.

Single-line comment:

// This is a comment

Multi-line comment:

/*
This is
a multi-line comment
*/

Comments are useful for explaining code.

---

# 5. Variables

A variable is a named memory location used to store data.

Example:

int age = 20;

Here:

int = data type
age = variable name
20 = value

Another example:

float marks = 85.5;
char grade = 'A';

---

# 6. Rules for Naming Variables

Rules:

1. Variable names can contain letters, digits and underscore.
2. Variable names cannot start with a digit.
3. Spaces are not allowed.
4. C is case-sensitive.
5. Keywords cannot be used as variable names.

Valid examples:

age
student_name
marks1
total_marks

Invalid examples:

1age
student name
float
total-marks

---

# 7. Constants

A constant is a value that should not be changed during program execution.

Example:

const int MAX = 100;

The value of MAX should not be changed.

---

# 8. Data Types in C

A data type tells the compiler what type of data a variable will store.

Important basic data types:

int
float
double
char

Examples:

int age = 20;

float marks = 85.5;

double distance = 12345.6789;

char grade = 'A';

---

# 9. Basic Data Types

## int

Used for integer values.

Example:

int age = 20;

## float

Used for decimal values.

Example:

float percentage = 85.5;

## double

Used for decimal values with higher precision than float.

Example:

double pi = 3.1415926535;

## char

Used to store a single character.

Example:

char grade = 'A';

Characters are written inside single quotes.

---

# 10. Format Specifiers

Format specifiers are used with printf() and scanf().

%d
- int

%f
- float

%lf
- double

%c
- char

Example:

int age = 20;
printf("%d", age);

Example:

char grade = 'A';
printf("%c", grade);

---

# 11. printf()

printf() is used to display output.

Example:

printf("Hello");

Example:

int age = 20;
printf("Age = %d", age);

Multiple values:

int age = 20;
float marks = 85.5;

printf("Age = %d\n", age);
printf("Marks = %.2f\n", marks);

---

# 12. scanf()

scanf() is used to take input from the user.

Example:

int age;

scanf("%d", &age);

The & symbol is used to provide the address of the variable to scanf().

Example:

#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your age is %d", age);

    return 0;
}

---

# 13. Escape Sequences

Common escape sequences:

\n
New line

\t
Tab

\\
Backslash

\"
Double quote

Example:

printf("Hello\nWorld");

Output:

Hello
World

---

# 14. Operators in C

Operators are symbols used to perform operations on values.

Main categories:

1. Arithmetic operators
2. Relational operators
3. Logical operators
4. Assignment operators
5. Increment and decrement operators

---

# 15. Arithmetic Operators

+ Addition
- Subtraction
* Multiplication
/ Division
% Modulus

Example:

int a = 10;
int b = 3;

a + b = 13
a - b = 7
a * b = 30
a / b = 3
a % b = 1

Important:

When both operands are integers, integer division is performed.

10 / 3 gives 3.

---

# 16. Relational Operators

Relational operators compare two values.

>
<
>=
<=
==
!=

The result is generally treated as true or false.

Example:

int a = 10;
int b = 20;

a < b

This condition is true.

---

# 17. Logical Operators

Logical operators:

&&
Logical AND

||
Logical OR

!
Logical NOT

Example:

(age >= 18 && age <= 60)

Both conditions must be true for AND.

---

# 18. Assignment Operators

Basic assignment:

=

Example:

int x = 10;

Other assignment operators:

+=
-=
*=
/=
%=

Example:

x += 5;

is equivalent to:

x = x + 5;

---

# 19. Increment and Decrement

Increment:

++

Decrement:

--

Example:

int x = 5;

x++;

Now x becomes 6.

x--;

Now x becomes 5 again.

---

# 20. Expression

An expression is a combination of values, variables and operators that produces a result.

Example:

a + b

Example:

x * y + 10

---

# 21. Type Casting

Type casting means converting one data type into another.

Example:

float result;

result = (float)10 / 3;

This converts 10 into float before division.

Without casting:

10 / 3

gives:

3

With casting:

(float)10 / 3

gives approximately:

3.333333

---

# 22. What is Data?

Data means raw facts, values or information.

Examples:

10
20
85.5
'A'
"Computer"
"1001"

Data is the basic input that a program processes.

---

# 23. What is a Data Structure?

A data structure is a method of organizing and storing data so that it can be accessed and manipulated efficiently.

Examples:

- Array
- Linked List
- Stack
- Queue
- Tree
- Graph
- Hash Table

---

# 24. Why Do We Need Data Structures?

Data structures help us:

1. Store data efficiently.
2. Access data efficiently.
3. Search data efficiently.
4. Insert data efficiently.
5. Delete data efficiently.
6. Organize large amounts of data.
7. Solve complex problems efficiently.

---

# 25. What is an Algorithm?

An algorithm is a finite sequence of well-defined steps used to solve a problem.

Example:

Problem:
Find the largest of two numbers.

Algorithm:

Step 1: Start.
Step 2: Take two numbers A and B.
Step 3: Compare A and B.
Step 4: If A is greater than B, print A.
Step 5: Otherwise print B.
Step 6: Stop.

---

# 26. Characteristics of an Algorithm

A good algorithm generally has:

1. Input
2. Output
3. Definiteness
4. Finiteness
5. Effectiveness

## Input

An algorithm may take zero or more inputs.

## Output

An algorithm should produce at least one output.

## Definiteness

Every step should be clear and unambiguous.

## Finiteness

The algorithm should terminate after a finite number of steps.

## Effectiveness

The steps should be practical and executable.

---

# 27. What is DSA?

DSA stands for:

Data Structures and Algorithms.

Data Structures:
Organize and store data.

Algorithms:
Provide steps to solve problems.

DSA combines both concepts to solve problems efficiently.

---

# 28. Types of Data Structures

Data structures can broadly be classified into:

1. Linear Data Structures
2. Non-Linear Data Structures

---

# 29. Linear Data Structures

In a linear data structure, elements are arranged sequentially.

Examples:

- Array
- Linked List
- Stack
- Queue

Example:

10 -> 20 -> 30 -> 40

The elements are arranged in a sequence.

---

# 30. Non-Linear Data Structures

In a non-linear data structure, elements are not arranged in a simple sequential manner.

Examples:

- Tree
- Graph

Example of tree:

        10
       /  \
      20   30
     / \
    40  50

---

# 31. Linear vs Non-Linear

Linear:

- Sequential organization
- Easy to traverse sequentially
- Examples: Array, Linked List, Stack, Queue

Non-Linear:

- Hierarchical or network organization
- Relationships can be complex
- Examples: Tree, Graph

---

# 32. Data Structure vs Data Type

Data Type:
Defines the type of data a variable can store.

Examples:
int
float
char

Data Structure:
Defines how multiple data elements are organized and managed.

Examples:
Array
Linked List
Stack
Queue

---

# 33. Data Structure vs Algorithm

Data Structure:
Organizes data.

Algorithm:
Solves a problem using a sequence of steps.

Both are important for efficient problem solving.

---

# 34. Important Day 1 Definitions

Data:
Raw facts or information.

Variable:
A named memory location used to store a value.

Data Type:
Specifies the type of data a variable can store.

Data Structure:
A method of organizing and storing data efficiently.

Algorithm:
A finite sequence of well-defined steps used to solve a problem.

DSA:
Combination of Data Structures and Algorithms.

Linear Data Structure:
A data structure in which elements are organized sequentially.

Non-Linear Data Structure:
A data structure in which elements are organized hierarchically or through complex relationships.

---

# 35. Day 1 Summary

Today I learned:

- Basic C programming
- C program structure
- Variables
- Constants
- Data types
- Format specifiers
- Input and output
- Operators
- Expressions
- Type casting
- Data
- Data Structures
- Algorithms
- DSA
- Linear Data Structures
- Non-Linear Data Structures

The purpose of Day 1 is to build the foundation required for the upcoming DSA topics.