#include <stdio.h>

int main()
{
    int n, k;
    int arr[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter rotation count: ");
    scanf("%d", &k);

    if (n > 0)
        k %= n;

    for (int r = 0; r < k; r++)
    {
        int first = arr[0];

        for (int i = 0; i < n - 1; i++)
            arr[i] = arr[i + 1];

        arr[n - 1] = first;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}