#include <stdio.h>

long long factorial(int n)
{
    long long result = 1;

    for (int i = 1; i <= n; i++)
        result *= i;

    return result;
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Factorial = %lld\n", factorial(n));

    return 0;
}