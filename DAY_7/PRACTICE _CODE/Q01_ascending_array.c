/*
Question No: 1

Question:
Write a C program to arrange an array in ascending order.

Example:
Input:  5 3 1 4 2
Output: 1 2 3 4 5
*/

#include <stdio.h>

int main()
{
    int n, arr[100], temp;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Ascending order: ");

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}