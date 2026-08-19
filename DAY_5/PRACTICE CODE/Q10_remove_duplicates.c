#include <stdio.h>

int main()
{
    int n, arr[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int size = 0;

    for(int i = 0; i < n; i++)
    {
        int duplicate = 0;

        for(int j = 0; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                duplicate = 1;
                break;
            }
        }

        if(!duplicate)
            arr[size++] = arr[i];
    }

    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}