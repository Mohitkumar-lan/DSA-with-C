#include <stdio.h>

int main()
{
    float a, b;
    char op;

    printf("Enter expression: ");
    scanf("%f %c %f", &a, &op, &b);

    switch (op)
    {
        case '+':
            printf("Result = %.2f\n", a + b);
            break;

        case '-':
            printf("Result = %.2f\n", a - b);
            break;

        case '*':
            printf("Result = %.2f\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Division by zero is not allowed\n");
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}