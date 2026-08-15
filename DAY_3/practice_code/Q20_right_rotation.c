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
        int last = arr[n - 1];

        for (int i = n - 1; i > 0; i--)
            arr[i] = arr[i - 1];

        arr[0] = last;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}