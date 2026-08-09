#include <stdio.h>

int main()
{
    float a, b, c, d, e;
    float total, average;

    printf("Enter marks of five subjects: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

    total = a + b + c + d + e;
    average = total / 5;

    printf("Total = %.2f\n", total);
    printf("Average = %.2f\n", average);

    return 0;
}