#include <stdio.h>

int main()
{
    int n, arr[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int candidate = arr[0];
    int count = 1;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] == candidate)
            count++;
        else
            count--;

        if(count == 0)
        {
            candidate = arr[i];
            count = 1;
        }
    }

    count = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == candidate)
            count++;
    }

    if(count > n / 2)
        printf("Majority = %d", candidate);
    else
        printf("No Majority Element");

    return 0;
}