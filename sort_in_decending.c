// Program to sort the elements of an array in ascending order using bubble sort
#include <stdio.h>

int main()
{
    int n, temp, i, j;

    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];

    for(i=0; i<n ;i++){
        printf("Enter the element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j] < arr[j+1]){
                // swap the elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

     printf("Sorted array: ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}