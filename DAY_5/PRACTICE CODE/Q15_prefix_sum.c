#include <stdio.h>

int main()
{
    int n, arr[100], prefix[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    prefix[0] = arr[0];

    for(int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + arr[i];

    for(int i = 0; i < n; i++)
        printf("%d ", prefix[i]);

    return 0;
}