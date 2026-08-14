#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}