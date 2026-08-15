#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int positive = 0;
    int negative = 0;
    int zero = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive = %d\n", positive);
    printf("Negative = %d\n", negative);
    printf("Zero = %d\n", zero);

    return 0;
}