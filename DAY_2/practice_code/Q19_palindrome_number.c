#include <stdio.h>

int main()
{
    int n;
    int original;
    int reverse = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    if (original == reverse)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}