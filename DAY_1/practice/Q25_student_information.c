#include <stdio.h>

int main()
{
    char name[50];
    int roll;
    float m1, m2, m3;
    float total, average;

    printf("Enter student name: ");
    scanf("%49s", name);

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    average = total / 3;

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", roll);
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
} 