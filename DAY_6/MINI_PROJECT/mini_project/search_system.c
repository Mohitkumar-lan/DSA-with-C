#include <stdio.h>

int linearSearch(int arr[], int n, int target)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
            return i;
    }

    return -1;
}

int binarySearch(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(arr[mid] == target)
            return mid;

        if(arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main()
{
    int n, arr[100], target;

    printf("===== SEARCH SYSTEM =====\n");

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter sorted array:\n");

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    int linearResult = linearSearch(arr, n, target);
    int binaryResult = binarySearch(arr, n, target);

    printf("\n----- RESULT -----\n");

    if(linearResult != -1)
        printf("Linear Search: Found at index %d\n", linearResult);
    else
        printf("Linear Search: Not Found\n");

    if(binaryResult != -1)
        printf("Binary Search: Found at index %d\n", binaryResult);
    else
        printf("Binary Search: Not Found\n");

    return 0;
}