#include <stdio.h>

int main()
{
    int n, arr[100], target;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &target);

    int left = 0;
    int right = n - 1;
    int answer = -1;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(arr[mid] == target)
        {
            answer = mid;
            left = mid + 1;
        }
        else if(arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    printf("Last occurrence = %d", answer);

    return 0;
}