#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("%d is largest\n", a);
    else if (b > a)
        printf("%d is largest\n", b);
    else
        printf("Both are equal\n");

    return 0;
}