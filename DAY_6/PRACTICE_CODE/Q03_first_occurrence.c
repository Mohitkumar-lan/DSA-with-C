#include <stdio.h>

int main()
{
    int n, arr[100], target;
    int index = -1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &target);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            index = i;
            break;
        }
    }

    printf("First occurrence = %d", index);

    return 0;
}