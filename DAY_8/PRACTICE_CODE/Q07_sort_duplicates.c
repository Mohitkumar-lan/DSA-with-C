/*
Question No: 7

Question:
Write a C program to sort an array containing
duplicate elements using Insertion Sort.

Example:
Input:
6
4 2 4 1 2 3

Output:
1 2 2 3 4 4
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