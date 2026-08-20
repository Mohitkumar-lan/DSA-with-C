/*
Question No: 9

Question:
Write a C program to sort an array using Insertion Sort
and count the number of shifts performed.

Example:

Input:
5
5 4 3 2 1

Output:
Sorted array: 1 2 3 4 5
Shifts: 10
*/

#include <stdio.h>

int main()
{
    int n, arr[100];
    int shifts = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
            shifts++;
        }

        arr[j + 1] = key;
    }

    printf("Sorted array: ");

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nShifts: %d", shifts);

    return 0;
}