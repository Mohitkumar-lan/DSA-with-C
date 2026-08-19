#include <stdio.h>

int main()
{
    int n, key, arr[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    int size = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] != key)
            arr[size++] = arr[i];
    }

    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}