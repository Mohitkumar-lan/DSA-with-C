/*
Question No: 4

Question:
Given a sorted array and a new element, insert the
new element at its correct position.

Example:

Array:
10 20 30 40 50

New element:
35

Output:
10 20 30 35 40 50
*/

#include <stdio.h>

int main()
{
    int n, arr[100], value;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &value);

    int i = n - 1;

    while(i >= 0 && arr[i] > value)
    {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = value;
    n++;

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}