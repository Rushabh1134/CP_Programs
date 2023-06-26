#include <stdio.h>

int main()
{
    int i, j, col, row, sum = 0, mult = 1;

    printf("Enter the the number of rows");
    scanf("%d", &row);
    printf("Enter the the number of column");
    scanf("%d", &col);

    int arr[row][col];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter the values of %d,%d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
                mult *= arr[i][j];
            }
        }
    }

    printf("Sum = %d", sum);
    printf("Product = %d", mult);
    return 0;
}