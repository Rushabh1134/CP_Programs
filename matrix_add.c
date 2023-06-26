#include <stdio.h>
int main()
{
    int row, col, i, j;

    printf("Enter the number of rows");
    scanf("%d", &row);
    printf("Enter the number of columns");
    scanf("%d", &col);

    int arr1[row][col], arr2[row][col], arrsum[row][col];

    printf("Enter the valuse of matrix 1\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter element number %d,%d", i + 1, j + 1);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the valuse of matrix 2\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter element number %d,%d", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            arrsum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", arrsum[i][j]);
        }
        printf("\n");
    }
    return 0;
}