#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 5 == 0)
        printf("Divisible by 5\n");
    else
        printf("Not divisible by 5\n");

    return 0;
}