/*
Question No: 5

Question:
Write a C program to sort positive numbers in an array
using Insertion Sort.

Negative numbers should remain unchanged in their
relative positions.

For this beginner practice, assume all input values
are positive.
*/

#include <stdio.h>

int main()
{
    int n, arr[100];

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
        }

        arr[j + 1] = key;
    }

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}