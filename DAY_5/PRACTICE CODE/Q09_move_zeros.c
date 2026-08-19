#include <stdio.h>

int main()
{
    int n, arr[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int position = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
            arr[position++] = arr[i];
    }

    while(position < n)
        arr[position++] = 0;

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}