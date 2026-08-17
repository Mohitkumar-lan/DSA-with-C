#include <stdio.h>

int main()
{
    int n, key;
    int arr[100];
    int index = -1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            index = i;
            break;
        }
    }

    printf("%d\n", index);

    return 0;
}