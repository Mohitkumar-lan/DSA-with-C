/*
Question No: 10

Question:
Sort an array using Insertion Sort and display the
sorted result.

Also count how many shifts were required.

This program helps understand the work performed
by Insertion Sort.
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

    printf("Sorted Array: ");

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nTotal Shifts: %d", shifts);

    return 0;
}