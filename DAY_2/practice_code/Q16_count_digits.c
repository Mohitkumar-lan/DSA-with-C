#include <stdio.h>

int main()
{
    int n;
    int count = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n == 0)
        count = 1;
    else
    {
        if (n < 0)
            n = -n;

        while (n != 0)
        {
            n /= 10;
            count++;
        }
    }

    printf("Number of digits = %d\n", count);

    return 0;
}