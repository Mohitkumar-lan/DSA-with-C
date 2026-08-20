#include <stdio.h>

int main()
{
    int n, arr[100], target;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &target);

    int linearIndex = -1;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            linearIndex = i;
            break;
        }
    }

    int left = 0;
    int right = n - 1;
    int binaryIndex = -1;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(arr[mid] == target)
        {
            binaryIndex = mid;
            break;
        }
        else if(arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    printf("Linear Search Index = %d\n", linearIndex);
    printf("Binary Search Index = %d\n", binaryIndex);

    return 0;
}