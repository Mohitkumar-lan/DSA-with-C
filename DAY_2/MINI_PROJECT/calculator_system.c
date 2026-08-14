#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

int main()
{
    int choice;
    float a, b;

    printf("====================================\n");
    printf("       SIMPLE CALCULATOR\n");
    printf("====================================\n");

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 5)
    {
        printf("Calculator closed.\n");
        return 0;
    }

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (choice)
    {
        case 1:
            printf("Result = %.2f\n", add(a, b));
            break;

        case 2:
            printf("Result = %.2f\n", subtract(a, b));
            break;

        case 3:
            printf("Result = %.2f\n", multiply(a, b));
            break;

        case 4:
            if (b == 0)
                printf("Division by zero is not allowed.\n");
            else
                printf("Result = %.2f\n", divide(a, b));
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}