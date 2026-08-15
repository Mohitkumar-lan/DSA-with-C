#include <stdio.h>

int main()
{
    int n, position, value;
    int arr[101];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter index and value: ");
    scanf("%d %d", &position, &value);

    if (position < 0 || position > n)
    {
        printf("Invalid position\n");
        return 0;
    }

    for (int i = n; i > position; i--)
        arr[i] = arr[i - 1];

    arr[position] = value;
    n++;

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}