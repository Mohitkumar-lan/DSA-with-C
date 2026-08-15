#include <stdio.h>

int main()
{
    int rows, cols;
    int matrix[10][10];

    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
    }

    printf("Transpose:\n");

    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < rows; i++)
            printf("%d ", matrix[i][j]);

        printf("\n");
    }

    return 0;
}