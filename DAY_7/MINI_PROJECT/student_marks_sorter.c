/*
Mini Project:

Student Marks Sorter

Question:
Create a C program that takes marks of students and
sorts them in ascending order and descending order.

The program should display:
1. Original marks
2. Ascending order
3. Descending order

Concepts:
- Arrays
- Loops
- Bubble Sort
- Functions
*/

#include <stdio.h>

void bubbleAscending(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleDescending(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n, marks[100], ascending[100], descending[100];

    printf("===== STUDENT MARKS SORTER =====\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter marks:\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);

        ascending[i] = marks[i];
        descending[i] = marks[i];
    }

    bubbleAscending(ascending, n);
    bubbleDescending(descending, n);

    printf("\nOriginal Marks: ");

    for(int i = 0; i < n; i++)
        printf("%d ", marks[i]);

    printf("\nAscending Order: ");

    for(int i = 0; i < n; i++)
        printf("%d ", ascending[i]);

    printf("\nDescending Order: ");

    for(int i = 0; i < n; i++)
        printf("%d ", descending[i]);

    return 0;
}