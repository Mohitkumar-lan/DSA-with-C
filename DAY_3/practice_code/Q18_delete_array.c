#include <stdio.h>

int main()
{
    int n, position;
    int arr[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter index to delete: ");
    scanf("%d", &position);

    if (position < 0 || position >= n)
    {
        printf("Invalid position\n");
        return 0;
    }

    for (int i = position; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}