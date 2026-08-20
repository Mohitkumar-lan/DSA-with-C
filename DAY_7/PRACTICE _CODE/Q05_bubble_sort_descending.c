/*
Question No: 5

Question:
Write a C program to sort an array using Bubble Sort
in descending order.

Example:
Input:  1 5 3 2 4
Output: 5 4 3 2 1
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
            if(arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}