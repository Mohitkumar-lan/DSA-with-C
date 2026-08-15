#include <stdio.h>

int main()
{
    int n;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int minimum = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minimum)
            minimum = arr[i];
    }

    printf("Minimum = %d\n", minimum);

    return 0;
}