#include <stdio.h>

void reverse(int arr[], int l, int r)
{
    while(l < r)
    {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;

        l++;
        r--;
    }
}

int main()
{
    int n, k, arr[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    k %= n;

    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, n - 1);

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}