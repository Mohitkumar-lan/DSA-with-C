#include <stdio.h>

int main()
{
    int n;
    int marks[100];

    printf("====================================\n");
    printf("       STUDENT MARKS ANALYZER\n");
    printf("====================================\n");

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid number of subjects.\n");
        return 0;
    }

    printf("Enter marks:\n");

    for (int i = 0; i < n; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    int sum = 0;
    int maximum = marks[0];
    int minimum = marks[0];

    for (int i = 0; i < n; i++)
    {
        sum += marks[i];

        if (marks[i] > maximum)
            maximum = marks[i];

        if (marks[i] < minimum)
            minimum = marks[i];
    }

    float average = (float)sum / n;

    printf("\n========== RESULT ==========\n");

    printf("Total Marks = %d\n", sum);
    printf("Average = %.2f\n", average);
    printf("Highest Marks = %d\n", maximum);
    printf("Lowest Marks = %d\n", minimum);

    return 0;
}