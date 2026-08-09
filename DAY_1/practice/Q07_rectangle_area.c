#include <stdio.h>

int main()
{
    float length, breadth;

    printf("Enter length and breadth: ");
    scanf("%f %f", &length, &breadth);

    printf("Area = %.2f\n", length * breadth);

    return 0;
}