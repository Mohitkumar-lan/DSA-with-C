#include <stdio.h>

int main()
{
    int n;
    int matrix[10][10];
    int sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    }

    for (int i = 0; i < n; i++)
        sum += matrix[i][i];

    printf("Main diagonal sum = %d\n", sum);

    return 0;
}