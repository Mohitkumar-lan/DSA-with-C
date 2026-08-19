#include <stdio.h>
#include <limits.h>

int main()
{
    int n, arr[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int largest = INT_MIN;
    int second = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    printf("Second Largest = %d", second);

    return 0;
}