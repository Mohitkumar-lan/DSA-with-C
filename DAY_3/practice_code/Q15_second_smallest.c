#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    int arr[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int smallest = INT_MAX;
    int second = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            second = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < second && arr[i] != smallest)
        {
            second = arr[i];
        }
    }

    if (second == INT_MAX)
        printf("Second smallest does not exist\n");
    else
        printf("Second smallest = %d\n", second);

    return 0;
}