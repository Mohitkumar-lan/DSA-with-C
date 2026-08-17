#include <stdio.h>

int main()
{
    int n;
    int arr[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if (n == 0)
        return 0;

    int j = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[j])
        {
            j++;
            arr[j] = arr[i];
        }
    }

    int newSize = j + 1;

    for (int i = 0; i < newSize; i++)
        printf("%d ", arr[i]);

    return 0;
}