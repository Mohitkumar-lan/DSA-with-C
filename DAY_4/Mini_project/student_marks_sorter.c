#include <stdio.h>

void sortDescending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    int marks[100];

    printf("====================================\n");
    printf("       STUDENT MARKS SORTER\n");
    printf("====================================\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid number of students.\n");
        return 0;
    }

    printf("Enter marks:\n");

    for (int i = 0; i < n; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    sortDescending(marks, n);

    printf("\n========== RANKING ==========\n");

    for (int i = 0; i < n; i++)
    {
        printf("Rank %d: %d marks\n", i + 1, marks[i]);
    }

    printf("\nHighest Marks = %d\n", marks[0]);
    printf("Lowest Marks = %d\n", marks[n - 1]);

    return 0;
}