#include <stdio.h>

int main()
{
    float m1, m2, m3;
    float total, average;

    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    average = total / 3;

    printf("Total = %.2f\n", total);
    printf("Average = %.2f\n", average);

    return 0;
}