#include <stdio.h>

int main()
{
    int n;
    int reverse = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    printf("Reverse = %d\n", reverse);

    return 0;
}