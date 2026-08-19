#include <stdio.h>

int main()
{
    int n, arr[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int minimum = arr[0];
    int maximumDifference = arr[1] - arr[0];

    for(int i = 1; i < n; i++)
    {
        int difference = arr[i] - minimum;

        if(difference > maximumDifference)
            maximumDifference = difference;

        if(arr[i] < minimum)
            minimum = arr[i];
    }

    printf("Maximum Difference = %d", maximumDifference);

    return 0;
}