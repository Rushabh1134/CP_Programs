// Program to find the smallest number in an array givern by the user
#include <stdio.h>

int smallest(int arr[], int n);

int main()
{
    int n, i, small;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    small = smallest(arr, n);

    printf("The smallest number in the array is %d\n", small);

    return 0;
}

int smallest(int arr[], int n)
{
    int i, small = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    return small;
}