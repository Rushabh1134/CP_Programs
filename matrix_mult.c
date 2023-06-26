#include <stdio.h>

int main()
{
    int row1, col1, row2, col2, i, j, k;

do{
    printf("Enter the number of rows in first matrix: ");
    scanf("%d", &row1);
    printf("Enter the number of columns in first matrix: ");
    scanf("%d", &col1);

    printf("Enter the number of rows in second matrix: ");
    scanf("%d", &row2);
    printf("Enter the number of columns in second matrix: ");
    scanf("%d", &col2);
}
while (col1 != row2);

int arr1[row1][col1];
int arr2[row2][col2];
int arr[row1][col2];

printf("Enter the elements of matrix 1");

for(i =0; i< row1; i++){
    for(j =0; j< col1; j++){
        printf("Enter element %d,%d",i+1, j+1);
        scanf("%d",arr1[i][j]);
    }
}

printf("Enter the elements of matrix 2");

for(i =0; i< row2; i++){
    for(j =0; j< col2; j++){
        printf("Enter element %d,%d",i+1, j+1);
        scanf("%d",arr2[i][j]);
    }
}

for(i =0; i< row1; i++){
    for(j =0; j< col2; j++){
       arr[i][j] = 0;
    }
}

for(i =0; i< row1; i++){
    for(j =0; j< col2; j++){
       for(k =0 ; k< col1; k++){
        arr[i][j] += arr1[i][k] * arr2[k][j];
       }
    }
}




   
    return 0;
}