/*
Question No: 9

Question:
Use the basic idea of Selection Sort to find the
largest element of an array.
*/

#include <stdio.h>

int main()
{
    int n, arr[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxIndex = 0;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > arr[maxIndex])
            maxIndex = i;
    }

    printf("Maximum element = %d", arr[maxIndex]);

    return 0;
}