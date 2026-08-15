#include <stdio.h>

int main()
{
    int n;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maximum = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maximum)
            maximum = arr[i];
    }

    printf("Maximum = %d\n", maximum);

    return 0;
}