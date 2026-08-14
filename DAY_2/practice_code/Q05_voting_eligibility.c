#include <stdio.h>

int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("Eligible\n");
    else
        printf("Not Eligible\n");

    return 0;
}