/*
Question No: 10

Question:
Write a C program that sorts the same array using
Bubble Sort and Selection Sort and displays both results.
*/

#include <stdio.h>

int main()
{
    int n, arr1[100], arr2[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
    }

    /* Bubble Sort */

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr1[j] > arr1[j + 1])
            {
                int temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }

    /* Selection Sort */

    for(int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for(int j = i + 1; j < n; j++)
        {
            if(arr2[j] < arr2[minIndex])
                minIndex = j;
        }

        int temp = arr2[i];
        arr2[i] = arr2[minIndex];
        arr2[minIndex] = temp;
    }

    printf("Bubble Sort: ");

    for(int i = 0; i < n; i++)
        printf("%d ", arr1[i]);

    printf("\nSelection Sort: ");

    for(int i = 0; i < n; i++)
        printf("%d ", arr2[i]);

    return 0;
}