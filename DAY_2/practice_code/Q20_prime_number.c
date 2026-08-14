#include <stdio.h>

int main()
{
    int n;
    int isPrime = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n < 2)
        isPrime = 0;

    for (int i = 2; i * i <= n && isPrime; i++)
    {
        if (n % i == 0)
            isPrime = 0;
    }

    if (isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}