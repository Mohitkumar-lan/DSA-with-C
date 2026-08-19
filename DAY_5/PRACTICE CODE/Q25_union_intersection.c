#include <stdio.h>

int contains(int arr[], int n, int value)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == value)
            return 1;
    }

    return 0;
}

int main()
{
    int n, m;
    int a[100], b[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);

    for(int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    printf("Union: ");

    for(int i = 0; i < n; i++)
    {
        if(!contains(a, i, a[i]))
            printf("%d ", a[i]);
    }

    for(int i = 0; i < m; i++)
    {
        if(!contains(a, n, b[i]) && !contains(b, i, b[i]))
            printf("%d ", b[i]);
    }

    printf("\nIntersection: ");

    for(int i = 0; i < n; i++)
    {
        if(contains(b, m, a[i]) && !contains(a, i, a[i]))
            printf("%d ", a[i]);
    }

    return 0;
}