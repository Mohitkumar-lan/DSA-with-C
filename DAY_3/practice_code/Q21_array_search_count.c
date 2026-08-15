#include <stdio.h>

int main()
{
    int n, key;
    int arr[100];
    int count = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            count++;
    }

    if (count > 0)
        printf("Found %d time(s)\n", count);
    else
        printf("Element not found\n");

    return 0;
}