#include <stdio.h>

int main()
{
    int n;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array: ");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}