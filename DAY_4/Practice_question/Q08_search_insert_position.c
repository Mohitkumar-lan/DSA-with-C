#include <stdio.h>

int main()
{
    int n, key;
    int arr[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    int low = 0;
    int high = n;

    while (low < high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid;
    }

    printf("%d\n", low);

    return 0;
}