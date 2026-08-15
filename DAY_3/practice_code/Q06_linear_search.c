#include <stdio.h>

int main()
{
    int n, key;
    int arr[100];
    int found = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = i;
            break;
        }
    }

    if (found != -1)
        printf("Element found at index %d\n", found);
    else
        printf("Element not found\n");

    return 0;
}