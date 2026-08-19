#include <stdio.h>

int main()
{
    int n, arr[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int largest = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
            largest = arr[i];
    }

    printf("Largest = %d", largest);

    return 0;
}