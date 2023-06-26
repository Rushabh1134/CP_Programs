#include <stdio.h>

int main()
{
    int i, j, row, column;

    printf("Enter the the number of rows");
    scanf("%d", &row);
    printf("Enter the the number of column");
    scanf("%d", &column);

    int arr1[row][column],arr2[row][column];


    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter the values of %d,%d: ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("The entered matrix is:\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            arr2[j][i] = arr1[i][j];
        }
    }

     printf("The transpose of the matrix is:\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }

}
