#include <stdio.h>
#include <limits.h>

int main()
{
    int n, arr[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int smallest = INT_MAX;
    int second = INT_MAX;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < smallest)
        {
            second = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < second && arr[i] != smallest)
        {
            second = arr[i];
        }
    }

    printf("Second Smallest = %d", second);

    return 0;
}