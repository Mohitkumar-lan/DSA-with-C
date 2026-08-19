#include <stdio.h>

int main()
{
    int n, arr[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int current = arr[0];
    int minimum = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(current + arr[i] < arr[i])
            current += arr[i];
        else
            current = arr[i];

        if(current < minimum)
            minimum = current;
    }

    printf("Minimum Subarray Sum = %d", minimum);

    return 0;
}