#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    int arr[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int largest = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    if (second == INT_MIN)
        printf("Second largest does not exist\n");
    else
        printf("Second largest = %d\n", second);

    return 0;
}