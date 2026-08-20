/*
Question No: 8

Question:
Use the basic idea of Selection Sort to find the
smallest element of an array.
*/

#include <stdio.h>

int main()
{
    int n, arr[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int minIndex = 0;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < arr[minIndex])
            minIndex = i;
    }

    printf("Minimum element = %d", arr[minIndex]);

    return 0;
}