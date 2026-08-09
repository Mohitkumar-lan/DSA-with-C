#include <stdio.h>

int main()
{
    int age;

    printf("Enter current age: ");
    scanf("%d", &age);

    printf("Age next year = %d\n", age + 1);

    return 0;
}