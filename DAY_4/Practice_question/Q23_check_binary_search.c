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
    int high = n - 1;
    int found = 0;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            found = 1;
            break;
        }
        else if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (found)
        printf("Found\n");
    else
        printf("Not Found\n");

    return 0;
}