#include <stdio.h>

int main()
{
    int n;
    int arr[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Duplicate elements: ");

    for (int i = 0; i < n; i++)
    {
        int alreadyPrinted = 0;

        for (int k = 0; k < i; k++)
        {
            if (arr[k] == arr[i])
            {
                alreadyPrinted = 1;
                break;
            }
        }

        if (alreadyPrinted)
            continue;

        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
                count++;
        }

        if (count > 1)
            printf("%d ", arr[i]);
    }

    return 0;
}