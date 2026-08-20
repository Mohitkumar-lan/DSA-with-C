/*
Question No: 3

Question:
Write a C program to sort an array using Bubble Sort
in ascending order.

Example:
Input:  5 1 4 2 8
Output: 1 2 4 5 8
*/

#include <stdio.h>

int main()
{
    int n, arr[100], temp;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}