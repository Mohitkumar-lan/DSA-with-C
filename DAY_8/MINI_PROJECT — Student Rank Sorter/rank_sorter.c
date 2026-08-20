/*
DAY 8 MINI PROJECT

Project:
Student Rank Sorter

Question:
Create a C program that takes marks of students and
arranges them from highest marks to lowest marks.

The program should display the rank, student number,
and marks.

Concepts:
- Arrays
- Functions
- Insertion Sort
- Descending Order
*/

#include <stdio.h>

void insertionSort(int marks[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int key = marks[i];
        int j = i - 1;

        while(j >= 0 && marks[j] < key)
        {
            marks[j + 1] = marks[j];
            j--;
        }

        marks[j + 1] = key;
    }
}

int main()
{
    int n, marks[100];

    printf("===== STUDENT RANK SORTER =====\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter marks:\n");

    for(int i = 0; i < n; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    insertionSort(marks, n);

    printf("\n===== RANK LIST =====\n");

    for(int i = 0; i < n; i++)
    {
        printf("Rank %d -> Marks: %d\n", i + 1, marks[i]);
    }

    return 0;
}