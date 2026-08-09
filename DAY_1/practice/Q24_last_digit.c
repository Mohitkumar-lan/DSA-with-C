#include <stdio.h>

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Last digit = %d\n", n % 10);

    return 0;
}