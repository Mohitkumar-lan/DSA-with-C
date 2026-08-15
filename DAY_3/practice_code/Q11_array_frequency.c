#include <stdio.h>

int main()
{
    int n, key;
    int arr[100];
    int count = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            count++;
    }

    printf("Frequency = %d\n", count);

    return 0;
}