#include <stdio.h>

int main()
{
    char name[50];
    int roll;
    float m1, m2, m3, m4, m5;
    float total, average, percentage;

    printf("====================================\n");
    printf("      STUDENT MARKS SYSTEM\n");
    printf("====================================\n");

    printf("Enter student name: ");
    scanf("%49s", name);

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("Enter marks of 5 subjects:\n");

    printf("Subject 1: ");
    scanf("%f", &m1);

    printf("Subject 2: ");
    scanf("%f", &m2);

    printf("Subject 3: ");
    scanf("%f", &m3);

    printf("Subject 4: ");
    scanf("%f", &m4);

    printf("Subject 5: ");
    scanf("%f", &m5);

    total = m1 + m2 + m3 + m4 + m5;

    average = total / 5;

    percentage = total / 5;

    printf("\n====================================\n");
    printf("          STUDENT REPORT\n");
    printf("====================================\n");

    printf("Name       : %s\n", name);
    printf("Roll Number: %d\n", roll);
    printf("Total      : %.2f / 500\n", total);
    printf("Average    : %.2f\n", average);
    printf("Percentage : %.2f%%\n", percentage);

    if (percentage >= 40)
        printf("Result     : PASS\n");
    else
        printf("Result     : FAIL\n");

    printf("====================================\n");

    return 0;
}