#include <stdio.h>

int main()
{
    int n, arr[100], prefix[100];
    int l, r;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    prefix[0] = arr[0];

    for(int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + arr[i];

    scanf("%d %d", &l, &r);

    if(l == 0)
        printf("Sum = %d", prefix[r]);
    else
        printf("Sum = %d", prefix[r] - prefix[l - 1]);

    return 0;
}