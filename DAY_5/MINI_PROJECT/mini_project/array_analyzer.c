#include <stdio.h>

int main()
{
    int n, arr[100];

    printf("===== ARRAY ANALYZER =====\n");

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n <= 0 || n > 100)
    {
        printf("Invalid size");
        return 0;
    }

    printf("Enter elements:\n");

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int min = arr[0];
    int max = arr[0];
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];

        sum += arr[i];
    }

    int current = arr[0];
    int maxSubarray = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(current + arr[i] > arr[i])
            current += arr[i];
        else
            current = arr[i];

        if(current > maxSubarray)
            maxSubarray = current;
    }

    printf("\n----- RESULT -----\n");

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
    printf("Sum = %d\n", sum);
    printf("Maximum Subarray Sum = %d\n", maxSubarray);

    printf("\nOriginal Array:\n");

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}